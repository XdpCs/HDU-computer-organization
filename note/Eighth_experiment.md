# 实验8-实现R型指令的CPU设计实验

## 实验内容

1. 掌握MIPS R型指令的数据通路设计，掌握指令流和数据流的控制方法
2. 掌握完整的单周期CPU顶层模块的设计方法
3. 实现MIPS R型指令的功能

## 解决方法

1. 分析MIPS R型指令的特点，OP均为000000b，可作为判断R型指令的依据
2. 两个源操作数分别在rs和rt字段所指定的寄存器中，而目的操作数则是在rd字段所指定的寄存器
3.分析数据通路是从指令存储器取出的指令经过初级译码，将分解出的源寄存器rs、rt直接与寄存器堆的两个读端口A和B的寄存器地址连接，而将目的寄存器rd字段与寄存器堆的写端口地址相连，寄存器读出的A口数据和B口数据则直接连接到ALU的输入端A和B，ALU计算后的结果则送入寄存器堆的写数据端口
4. 分析时序，首先是取指令，然后进行指令译码，最后将运算结果送到目的寄存器，PC自增，指向下一条指令
5. 实验八中除译码模块，其他模块都已经前几个实验中完成，只需要将其连接，然后在译码模块中通过OP判断是否为R型，且将funct翻译成ALU的控制信号ALU_OP以及指定ALU的运算功能，由于此译码模块较为简单，我就在顶层模块实现了
6. 具体用到的实验是[多功能ALU设计实验](./Third_experiment.md)、[寄存器堆设计实验](./Fourth_experiment.md)、[取指令与指令译码实验](./Seventh_experiment.md)
7. 代码实现:

**顶层模块**

```verilog
module CPU(clk,rst,op_code,funct,rs_addr,rt_addr,rd_addr,shamt,OF,ZF,F,ALU_OP,Inst_code);
input clk,rst;
output [31:0]Inst_code;
output [5:0]op_code,funct;
output [4:0]rs_addr,rt_addr,rd_addr,shamt;
output [31:0]F;
output OF,ZF;
output reg [2:0]ALU_OP;
reg Write_Reg;
wire [31:0]R_Data_A,R_Data_B;
PC pc1(clk,rst,Inst_code);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
Fourth_experiment_first F1(rs_addr,rt_addr,Write_Reg,R_Data_A,R_Data_B,rst,~clk,rd_addr,F);
Third_experiment_first T1(OF,ZF,ALU_OP,R_Data_A,R_Data_B,F); 
always@(*)
	begin	
		Write_Reg<=0;
			ALU_OP=0;
				if(op_code==0)
					Write_Reg<=1;
					begin 
						case(funct)
						6'b100000:ALU_OP=3'b100;
						6'b100010:ALU_OP=3'b101;
						6'b100100:ALU_OP=3'b000;
						6'b100101:ALU_OP=3'b001;
						6'b100110:ALU_OP=3'b010;
						6'b100111:ALU_OP=3'b011;
						6'b101011:ALU_OP=3'b110;
						6'b000100:ALU_OP=3'b111;
						endcase 
					end
				end
endmodule
```

**PC（取指令模块）**

```verilog
module PC(clk,rst,Inst_code);
input clk,rst;
wire [31:0]PC_new;
reg[31:0]PC;
initial
	PC = 32'h0000_0000;
output [31:0]Inst_code;
assign PC_new = PC +4;
Inst_Rom your_instance_name(
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

**Fourth_experiment_first模块（寄存器堆模块）**

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
memory_initialization_vector=00000827 0001102b 00421820 00622020 00832820 00a33020 00463804 00a64820 01264004 
00284826 01215020 01075822 00e86022 012c6824 012c7025 00c77825 00c78027 00e38820 02289004 02239804 00f3a004 
0281a820 0255b025 0296b820 0296c022 02d4c822 0241d026 02d4d82b 0354e02b 02c2e820 0282f022 017af820;
```

**测试模块**

```verilog
module test;
	// Inputs
	reg clk;
	reg rst;
	// Outputs
	wire [5:0] op_code;
	wire [5:0] funct;
	wire [4:0] rs_addr;
	wire [4:0] rt_addr;
	wire [4:0] rd_addr;
	wire [4:0] shamt;
	wire OF;
	wire ZF;
	wire [31:0] F;
	wire [2:0] ALU_OP;
	wire [31:0] Inst_code;
	CPU uut (
		.clk(clk), 
		.rst(rst), 
		.op_code(op_code), 
		.funct(funct), 
		.rs_addr(rs_addr), 
		.rt_addr(rt_addr), 
		.rd_addr(rd_addr), 
		.shamt(shamt), 
		.OF(OF), 
		.ZF(ZF), 
		.F(F), 
		.ALU_OP(ALU_OP), 
		.Inst_code(Inst_code)
	);
	always #20 clk = ~clk;
	initial begin
		clk = 0;
		rst = 1;
		#2;
      rst = 0;  
	end      
endmodule
```

**友情提示：开始不拉高rst，第一条指令取不到噢，解释可以看实验七，顶上有链接**

## 代码地址

[代码地址](../Eighth_experiment)

## 链接

* 上一页：[实验7-取指令与指令译码实验](./Seventh_experiment.md)
* 下一页：[实验9-实现R-I型指令的CPU设计实验](./Ninth_experiment.md)