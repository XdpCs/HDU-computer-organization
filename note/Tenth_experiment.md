# 实验10（十）实现R-I-J型指令的CPU设计实验

## 实验内容

1. 掌握MIPS R型、I型和J型指令的综合数据通路设计，掌握各种转移类指令的控制流和指令流的多路选通控制方法
2. 掌握J型、I型和R型转移指令的指令格式和寻址方式，学习转移地址的产生方法，掌握无条件转移指令和条件转移指令的实现方法
3. 编程实现MIPS的部分J型、I型和R型转移指令的功能

## 解决方法

1. 分析MIPS J型指令的特点，由6位OP字段和26位的address字段构成
2. 分析转移指令的数据通路，转移地址的产生有三种方式，转移地址产生后，要送入PC，才能完成跳转
3. R型指令还添加了一条无条件跳转指令，要在原来的PC模块判断R型指令的地方进行修改，不能在I型指令下判断，这样会产生冲突
4. 对于条件转移指令beq和bne要使用ALU做减法，判断是否全为零，也就是用ZF判断是否转移
5. J型指令可以接着I型指令的case结构写下来，与J型case结构无冲突
6. 由于实验九和实验十想法十分接近，主要是控制信号的改变，及其译码模块的改变
7. 涉及实验：具体用到的实验是[多功能ALU设计实验](./Third_experiment.md)、[寄存器堆设计实验](./Fourth_experiment.md)
   、[取指令与指令译码实验](./Seventh_experiment.md)
8. 代码展示

**顶层模块**

```verilog
module CPU(clk,rst,OF,ZF,F,ALU_OP,M_R_Data,w_r_s,imm_s,rt_imm_s,Mem_Write,Write_Reg,PC,PC_s,clk_M,R_Data_B,Inst_code);
input clk,rst,clk_M;
output [31:0]Inst_code;
wire [5:0]op_code,funct;
wire [4:0]rs_addr,rt_addr,rd_addr,shamt;
output [31:0]F;
output OF,ZF;
output [31:0]M_R_Data;
output [2:0]ALU_OP;
wire [31:0]Mem_Addr;
wire [4:0]W_Addr;
output imm_s,rt_imm_s,Mem_Write,Write_Reg;
output [1:0]w_r_s;
wire [31:0]imm_data;
wire [31:0]R_Data_A;
output [31:0]R_Data_B;
wire [15:0]imm;
wire [31:0]ALU_B;
wire [31:0]W_Data;
output [1:0]PC_s;
wire [25:0]address;
wire [1:0]wr_data_s;
wire [31:0]PC_new;
output [31:0]PC;
PC pc1(clk,rst,Inst_code,PC_s,R_Data_A,address,PC,imm_data,PC_new);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
assign imm = Inst_code[15:0];
assign address = Inst_code[25:0];
OP_Func op(op_code,funct,Write_Reg,ALU_OP,w_r_s,imm_s,rt_imm_s,Mem_Write,wr_data_s,PC_s,ZF);
assign W_Addr = (w_r_s[1])?5'b11111:((w_r_s[0])?rt_addr:rd_addr);
assign imm_data = (imm_s)?{{16{imm[15]}},imm}:{{16{1'b0}},imm};
Fourth_experiment_first F1(rs_addr,rt_addr,Write_Reg,R_Data_A,R_Data_B,rst,~clk,W_Addr,W_Data);
assign ALU_B = (rt_imm_s)?imm_data:R_Data_B;
Third_experiment_first T1(OF,ZF,ALU_OP,R_Data_A,ALU_B,F); 
RAM RAM_B (
  .clka(clk_M), // input clka
  .wea(Mem_Write), // input [0 : 0] wea
  .addra(F[5:0]), // input [5 : 0] addra
  .dina(R_Data_B), // input [31 : 0] dina
  .douta(M_R_Data) // output [31 : 0] douta
);
assign W_Data = (wr_data_s[1])?PC_new:((wr_data_s[0])? M_R_Data:F);
endmodule
```

**PC（取指令模块）**

```verilog
module PC(clk,rst,Inst_code,PC_s,R_Data_A,address,PC,imm_data,PC_new);
input clk,rst;
input [1:0]PC_s;
input [31:0]R_Data_A;
input [25:0]address;
input [31:0]imm_data;
output reg[31:0]PC;
output [31:0]PC_new;
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
		begin
			case (PC_s)   
				2'b00:	PC <= PC_new;
				2'b01:	PC  <= R_Data_A;	
				2'b10:   PC <= PC_new + (imm_data<<2);	
				2'b11:	PC  <= {PC_new[31:28],address,2'b00};
			endcase
		end
	end
endmodule

```

**OP_Func（译码模块）**

```verilog
module OP_Func(op_code,funct,Write_Reg,ALU_OP,w_r_s,imm_s,rt_imm_s,Mem_Write,wr_data_s,PC_s,ZF);
input [5:0]op_code;
input [5:0]funct;
input ZF;
output reg[2:0]ALU_OP;
output reg Write_Reg;
output reg [1:0]wr_data_s;
output reg imm_s;
output reg rt_imm_s;
output reg Mem_Write;
output reg [1:0]w_r_s;
output reg [1:0]PC_s;
always@(*)
	begin	
			Write_Reg=1;
			ALU_OP=3'b100;
			wr_data_s=0;
			imm_s=0;
			rt_imm_s=0;
			Mem_Write=0;
			w_r_s=0;
			PC_s = 0;
				if(op_code==6'b000000)
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
						6'b001000:begin Write_Reg=0;Mem_Write=0;PC_s = 2'b01; end
						endcase 
					end
				else
					begin
						case(op_code)
							6'b001000:begin w_r_s=2'b01;imm_s=1;rt_imm_s=1;ALU_OP=3'b100;end  
							6'b001100:begin w_r_s=2'b01;rt_imm_s=1;ALU_OP=3'b000; end  
							6'b001110:begin w_r_s=2'b01;rt_imm_s=1;ALU_OP=3'b010;end  
							6'b001011:begin w_r_s=2'b01;rt_imm_s=1;ALU_OP=3'b110; end  
							6'b100011:begin w_r_s=2'b01;imm_s=1;rt_imm_s=1;wr_data_s=2'b01;ALU_OP=3'b100; end  
							6'b101011:begin imm_s=1;rt_imm_s=1;ALU_OP=3'b100;Write_Reg=0;Mem_Write=1; end  
							6'b000100:begin ALU_OP=3'b101;PC_s = (ZF)?2'b10:2'b00; Write_Reg = 1'b0;end  
							6'b000101:begin ALU_OP=3'b101;PC_s = (ZF)?2'b00:2'b10; Write_Reg = 1'b0;end  
							6'b000010:begin Write_Reg=0;PC_s = 2'b11; end  
							6'b000011:begin w_r_s=2'b10;wr_data_s=2'b10;PC_s = 2'b11; end  
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

**数据.coe**

```verilog
memory_initialization_radix=16;
memory_initialization_vector=88888888,99999999,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,
aaaaaaaa,bbbbbbbb,00000820,00632020,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,00000820,00632020,00010fff,
20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,00000820,00632020,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,
00000820,00632020,00010fff,20006789,FFFF0000,0000FFFF,88888888,99999999,aaaaaaaa,bbbbbbbb,12345678,23456789,3456789a,6789abcd;
```

**程序机器码.coe**

```verilog
memory_initialization_radix=16;
memory_initialization_vector=00002020,20050014,2006000b,0c000004,00804020,00a04820,00c05020,8d0b0000,ad2b0000,21080001,21290001,214affff,1540fffa,03e00008;
```

**测试模块**

```verilog
module test;
	// Inputs
	reg clk;
	reg rst;
	reg clk_M;
	// Outputs
	wire OF;
	wire ZF;
	wire [31:0] F;
	wire [2:0] ALU_OP;
	wire [31:0] M_R_Data;
	wire [1:0] w_r_s;
	wire imm_s;
	wire rt_imm_s;
	wire Mem_Write;
	wire Write_Reg;
	wire [31:0] PC;
	wire [1:0] PC_s;
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
		.w_r_s(w_r_s), 
		.imm_s(imm_s), 
		.rt_imm_s(rt_imm_s), 
		.Mem_Write(Mem_Write), 
		.Write_Reg(Write_Reg), 
		.PC(PC), 
		.PC_s(PC_s), 
		.clk_M(clk_M), 
		.R_Data_B(R_Data_B), 
		.Inst_code(Inst_code)
	);
	always #4  clk_M = ~clk_M;
	always #16  clk =~clk;
	initial begin
		clk = 0;
		rst = 1;
		clk_M = 0;
		#2;
		rst = 0;
	end
endmodule
```

**汇编程序**

```verilog
main:
add $a0,$zero,$zero
addi $a1,$zero,20;
addi $a2,$zero,10;
jal BankMove
BankMove:
    add $t0,$a0,$zero;
    add $t1,$a1,$zero;
    add $t2,$a2,$zero;
Loop1:lw $t3,0($t0);
      sw $t3,0($t1);
      addi $t0,$t0,1;
      addi $t1,$t1,1;
      addi $t2,$t2,-1;
      bne $t2,$zero,Loop1;
      jr $ra
```

## 友情提示

**书上的机器码存在错误，读者可以自行对比，纠正机器码，博主用的汇编程序是将存储器1-10位搬到20-30位**

## 代码地址

[代码地址](../Tenth_experiment)