# 实验9-实现R-I型指令的CPU设计实验

## 实验内容

1. 掌握MIPS R型和I型指令的综合数据通路设计，掌握数据流的多路选通控制方法
2. 掌握取数指令lw和存数指令sw的寻址方式及其有效地址产生的方法
3. 实现MIPS的部分I型和 R型指令的功能

## 解决方法

1. 分析MIPS I型指令的特点，与R型指令有明显的不同：没有rd寄存器，使用rt作为目的寄存器；源操作数中有一个为立即数，位于指令的低16位
2. 在寄存器堆模块的写地址输入端口设置二选一选择器，由于R型和I型的目的寄存器不同，由rd_rt_s控制
3. 16位的立即数imm需要经过扩展才能与rs执行运算操作，对于有符号数的操作，执行的是符号扩展，对于无符号数的操作，执行的是0扩展
4. R型指令执行rs和rt运算，结果送rd；而I型立即数即数寻址指令则执行rs和扩展后的立即数imm运算，结果送rt。因此ALU的输入数据B端有两个选择：rt或者imm，仍可以通过二选一数据选择器，用rt_imm_s控制信号
5. 需要添加一个数据存储器RAM存放指令访问的数据，读出的数据，意味着要在寄存器堆的写端口加个选择器，用alu_mem_s控制信号，其中要注意一点就是数据存储器的clk至少是CPU频率的2倍以上，我使用了两个clk输入解决这个问题
6. 在实际写代码时，要注意顶层模块中，实例下层模块的顺序，由于译码模块变量多，我将其抽离出来，为了使顶层模块看起来简洁
7. 涉及实验： 具体用到的实验是[多功能ALU设计实验](./Third_experiment.md)、[寄存器堆设计实验](./Fourth_experiment.md)
   、[取指令与指令译码实验](./Seventh_experiment.md)
8. 代码展示

**顶层模块**

```verilog
module CPU(clk,rst,OF,ZF,F,ALU_OP,M_R_Data,rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s,Write_Reg,clk_M,R_Data_B,Inst_code);
input clk,rst,clk_M;
wire [31:0]Inst_code;
wire [5:0]op_code,funct;
wire [4:0]rs_addr,rt_addr,rd_addr,shamt;
output [31:0]F;
output OF,ZF;
output [31:0]M_R_Data;
output [2:0]ALU_OP;
wire [31:0]Mem_Addr;
wire [4:0]W_Addr;
output rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s,Write_Reg;
output [31:0]Inst_code;
wire [31:0]imm_data;
wire [31:0]R_Data_A;
output [31:0] R_Data_B;
wire [15:0]imm;
wire [31:0]ALU_B;
wire [31:0]W_Data;
PC pc1(clk,rst,Inst_code);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
assign imm = Inst_code[15:0];
OP_Func op(op_code,funct,Write_Reg,ALU_OP,rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s);
assign W_Addr = (rd_rt_s)?rt_addr:rd_addr;
assign imm_data = (imm_s)?{{16{imm[15]}},imm}:{{16{1'b0}},imm};
assign W_Data = alu_mem_s?M_R_Data:F;
Fourth_experiment_first 	F1(rs_addr,rt_addr,Write_Reg,R_Data_A,R_Data_B,rst,clk,W_Addr,W_Data);
assign ALU_B = (rt_imm_s)?imm_data:R_Data_B;	
Third_experiment_first T1(OF,ZF,ALU_OP,R_Data_A,ALU_B,F); 
RAM RAM_B (
  .clka(clk_M), // input clka
  .wea(Mem_Write), // input [0 : 0] wea
  .addra(F[5:0]), // input [5 : 0] addra
  .dina(R_Data_B), // input [31 : 0] dina
  .douta(M_R_Data) // output [31 : 0] douta
);
endmodule

```

**PC(取指令模块)**

```verilog
module PC(clk,rst,Inst_code);
input clk,rst;
wire [31:0]PC_new;
reg[31:0]PC;
initial
	PC = 32'h0000_0000;
output [31:0]Inst_code;
assign PC_new = PC +4;
Inst_Rom rom(
  .clka(clk), // input clka
  .addra(PC[7:2]), // input [5 : 0] addra
  .douta(Inst_code) // output [31 : 0] douta
);
always@(negedge clk or posedge rst)
	begin
		if(rst)
			begin PC <= 32'h0000_0000; end
		else
			begin PC <= PC_new; end
	end
endmodule
```

**OP_Func(译码模块)**

```verilog
module OP_Func(op_code,funct,Write_Reg,ALU_OP,rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s);
input [5:0]op_code;
input [5:0]funct;
output reg[2:0]ALU_OP;
output reg Write_Reg;
output reg rd_rt_s;
output reg imm_s;
output reg rt_imm_s;
output reg Mem_Write;
output reg alu_mem_s;
always@(*)
	begin	
			Write_Reg=1;
			ALU_OP=0;
			rd_rt_s=0;
			imm_s=0;
			rt_imm_s=0;
			Mem_Write=0;
			alu_mem_s=0;
				if(op_code==0)
					begin 
						case(funct)
						6'b100000:begin ALU_OP=3'b100; end
						6'b100010:begin ALU_OP=3'b101; end
						6'b100100:begin ALU_OP=3'b000;end
						6'b100101:begin ALU_OP=3'b001;end
						6'b100110:begin ALU_OP=3'b010;end
						6'b100111:begin ALU_OP=3'b011;end
						6'b101011:begin ALU_OP=3'b110;end
						6'b000100:begin ALU_OP=3'b111;end
						endcase 
					end
				else
					begin
						case(op_code)
							6'b001000:begin rd_rt_s=1;imm_s=1;rt_imm_s=1;ALU_OP=100;end  
							6'b001100:begin rd_rt_s=1;rt_imm_s=1;ALU_OP=000; end  
							6'b001110:begin rd_rt_s=1;rt_imm_s=1;ALU_OP=010;end  
							6'b001011:begin rd_rt_s=1;rt_imm_s=1;ALU_OP=110; end  
							6'b100011:begin rd_rt_s=1;imm_s=1;rt_imm_s=1;alu_mem_s=1;ALU_OP=100; end  
							6'b101011:begin imm_s=1;rt_imm_s=1;ALU_OP=100;Write_Reg=0;Mem_Write=1; end  
					endcase
				end
			end
endmodule
```

**Fourth_experiment_first（寄存器堆模块）**

```verilog
module Fourth_experiment_first(R_Addr_A,R_Addr_B,Write_Reg,R_Data_A,R_Data_B,Reset,Clk,W_Addr,W_Data);
input [4:0]R_Addr_A,R_Addr_B,W_Addr;
input Write_Reg,Reset,Clk;
input[31:0] W_Data;
output [31:0] R_Data_A,R_Data_B;
reg [31:0] REG_Files[0:31];
integer i=0;
initial
        for(i=0;i<32;i=i+1) REG_Files[i]<=0;
always @ (posedge Clk or posedge Reset)
	begin
		if(Reset)
			begin
				for(i=0;i<=31;i=i+1)
					REG_Files[i]<=0;
			end
		else
			begin
				if(Write_Reg)
					REG_Files[W_Addr]<=W_Data;
			end
	end
	assign R_Data_A = REG_Files[R_Addr_A];
	assign R_Data_B = REG_Files[R_Addr_B];
endmodule

```

**Third_experiment_first（ALU模块）**

```verilog
module Third_experiment_first(OF,ZF,ALU_OP,A,B,F);
input [2:0]ALU_OP;
input [31:0]A,B;
output reg[31:0]F;
reg C32;
output reg OF;
output reg ZF;
always @(ALU_OP or A or B)
 begin
	OF = 0;
	C32 = 0;
	case(ALU_OP)
			 3'b000:F<=A&B;
			 3'b001:F<=A|B;
			 3'b010:F<=A^B;
			 3'b011:F<=A~^B;
			 3'b100:{C32,F}<=A+B;
			 3'b101:{C32,F}<=A-B;
			 3'b110:begin if(A<B)  F<=32'h0000_0001;else F<=32'h0000_0000;end
			 3'b111:begin F<=B<<A;end
	endcase
	if(F==32'h0000_0000)	
			ZF<=1;
	else
			ZF<=0;
	if(ALU_OP == 3'b100 || ALU_OP == 3'b101)
		OF<=C32^F[31]^A[31]^B[31];	
	else
		OF <=0; 
	end
endmodule
```

**MIPS32.coe**

```verilog
memory_initialization_radix=16;
memory_initialization_vector=38011234,20026789,20039000,38040010,00822804,00253025,00833804,00464020,00414822,00225022,206b7fff,206c8000,314dffff,2c4e6788,2c4f678a,ac8b0000,ac0c0014,ac8d0010,ac8e0014,8c100010,8c910004,02119025,8c930010,8c940014,0274a827,8c96fff0,8c97fff4,02d7c02b;
```

**数据coe**

```verilog
memory_initialization_radix=16;
memory_initialization_vector=88888888,99999999,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,
aaaaaaaa,bbbbbbbb,00000820,00632020,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,00000820,00632020,00010fff,
20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,00000820,00632020,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,
00000820,00632020,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,12345678,23456789,3456789a,6789abcd;
```

**测试模块**

```verilog
module test;
	reg clk;
	reg rst;
	reg clk_M;
	wire OF;
	wire ZF;
	wire [31:0] F;
	wire [2:0] ALU_OP;
	wire [31:0] M_R_Data;
	wire rd_rt_s;
	wire imm_s;
	wire rt_imm_s;
	wire Mem_Write;
	wire alu_mem_s;
	wire Write_Reg;
	wire [31:0] R_Data_B;
	wire [31:0] Inst_code;
	CPU uut (
		.clk(clk), 
		.rst(rst), 
		.OF(OF), 
		.ZF(ZF), 
		.F(F), 
		.ALU_OP(ALU_OP), 
		.M_R_Data(M_R_Data), 
		.rd_rt_s(rd_rt_s), 
		.imm_s(imm_s), 
		.rt_imm_s(rt_imm_s), 
		.Mem_Write(Mem_Write), 
		.alu_mem_s(alu_mem_s), 
		.Write_Reg(Write_Reg), 
		.clk_M(clk_M), 
		.R_Data_B(R_Data_B), 
		.Inst_code(Inst_code)
	);
	always #9  clk_M = ~clk_M;
	always #20 clk =~clk;
	initial begin
		clk = 0;
		rst = 1;
		clk_M = 0;
		#2;
      rst = 0;
	end     
endmodule
```

## 友情提示

1.有的同学会把在顶层模块存数据存储器的地址和PC的地址弄混，大家会问为什么PC的存储器是取[7:2],而顶层模块存数据存储器的地址[5:0]
,主要原因就在PC=PC+4这个语句上，我们的存储器还是按照字节去寻址的，如果我们不取[7:2]的地址就会导致中间几条指令跳过，而顶层数据模块就是逐一增加的

2.数据存储器的clk至少是CPU频率的2倍以上

3.开始的时候，rst一定要拉高哦

## 代码地址

[代码地址](https://github.com/XdpCs/HDU-computer-organization/tree/master/Ninth_experiment)

## 链接

* 上一页：[实验8-实现R型指令的CPU设计实验](./Eighth_experiment.md)
* 下一页：[实验10-实现R-I-J型指令的CPU设计实验](./Tenth_experiment.md)