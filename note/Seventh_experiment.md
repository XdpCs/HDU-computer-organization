# 实验7-取指令与指令译码实验

## 实验内容

1. 学习指令存储器的设计
2. 掌握CPU取指令操作与指令译码的方法和过程

## 解决方法

1. 本次实验设计采用哈佛结构设计存储器模块，需要设计一个只读存储器作为指令存储器，采用Memory IP核实现（不会用Memory
   IP核，可以看我这个博文[存储器实验](./Fifth_experiment.md)
2. 程序计数器PC与PC自增加法器组合成一个模块，由于指令存储器只有64个32位单元，所以PC的32位指令地址的高24位可直接在设计中清零
3. 需要注意在指令周期clk的上升沿执行取指令操作，在clk下降沿更新PC值
4. 代码展示:

**顶层模块**

```verilog
module Fetch_Inst_Code(clk,rst,LED,MUX,op_code,funct,rs_addr,rt_addr,rd_addr,shamt,Inst_code);
input clk,rst;
input [1:0]MUX;
output [31:0]Inst_code;
output reg[7:0]LED;
reg [31:0]PC;
wire [31:0]PC_new;
output [5:0]op_code,funct;
output [4:0]rs_addr,rt_addr,rd_addr,shamt;
PC pc1(clk,rst,Inst_code);
always@(*)
	begin
		case(MUX)
			2'b00:LED = Inst_code[7:0];
			2'b01:LED = Inst_code[15:8];
			2'b10:LED = Inst_code[23:16];
			2'b11:LED = Inst_code[31:25];
		endcase
	end
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
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
Inst_Rom your_instance_name (
  .clka(clk), // input clka
  .addra(PC[7:2]), // input [5 : 0] addra
  .douta(Inst_code) // output [31 : 0] douta
);
always@(negedge clk or posedge rst)
	begin
		if(rst)
			begin PC <= 32'h0000_0000; end
		else
			begin PC <=PC_new; end
	end
endmodule
```

**友情提示：PC一定要初始化，否则结果会有所偏差**

**测试模块**

```verilog
module test;
	// Inputs
	reg clk;
	reg rst;
	reg [1:0] MUX;
	// Outputs
	wire [7:0] LED;
	wire [5:0] op_code;
	wire [5:0] funct;
	wire [4:0] rs_addr;
	wire [4:0] rt_addr;
	wire [4:0] rd_addr;
	wire [4:0] shamt;
	wire [31:0] Inst_code;
	Fetch_Inst_Code uut (
		.clk(clk), 
		.rst(rst), 
		.LED(LED), 
		.MUX(MUX), 
		.op_code(op_code), 
		.funct(funct), 
		.rs_addr(rs_addr), 
		.rt_addr(rt_addr), 
		.rd_addr(rd_addr), 
		.shamt(shamt), 
		.Inst_code(Inst_code)
	);
	always #33 clk = ~clk;
	initial begin
		clk = 0;
		rst = 1;
		MUX = 0;
		#2;
      rst = 0;
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

**友情提示：如果rst不先开始拉高，就会导致第一条指令取不到，我一个朋友就因为这个写了一个下午，重构了很久；根据我个人分析，是因为clk的上升沿的到来，但是PC地址还没准备好，导致第一条指令没有取到**
![在这里插入图片描述](../image/image9.png)
**询问了研究生学长，证实自己的想法**

## 代码地址

[代码地址](../Seventh_experiment)

## 链接

* 上一页：[实验6-MIPS汇编器与模拟器实验](./Sixth_experiment.md)
* 下一页：[实验8-实现R型指令的CPU设计实验](./Eighth_experiment.md)