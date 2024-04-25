# 实验4-寄存器堆设计实验

## 实验内容

1. 学习使用Verilog HDL 进行时序电路的设计方法
2. 掌握灵活运用Verilog HDL进行各种描述与建模的技巧和方法
3. 学习寄存器堆的数据传送与读/写工作原理，掌握寄存器堆的设计方法

## 解决方法

1. 分析一个32x32位的寄存器堆，即含有32个寄存器，每个寄存器32位。该寄存器堆有2个读端口、1个写端口，即能够同时读出2个寄存器的值，写入1个寄存器
2. 首先，分析出两个端口读入是5位的地址，读出的数据是32位的两个，该寄存器堆只有一个写端口，还要配合控制信号Write_Reg，且写操作是边沿触发的，所有写入操作的输入信号必须在时钟边沿来临时已经有效
3. 寄存器堆的读操作和写操作的地址译码，只需引用寄存器地址作为数组的下标即可；读只需要组合逻辑，给出寄存器地址，读出数据
4. 代码展示：

**顶层模块（需要数据输入在板子上操作）：**

```verilog
module RegisterFile(Addr,Write_Reg,Opt,Clk,Reset,A_B,LED);
input [1:0]Opt;
input [4:0]Addr;
input Write_Reg,Clk,Reset,A_B;
output reg [7:0]LED;
wire [31:0]R_Data_A,R_Data_B;
reg [4:0]R_Addr_A,R_Addr_B;
reg [31:0]W_Data;
initial
	LED <= 0;
Fourth_experiment_first F1(R_Addr_A,R_Addr_B,Write_Reg,R_Data_A,R_Data_B,Reset,Clk,Addr,W_Data);
always@(Addr or Write_Reg or Opt or A_B or R_Data_A or R_Data_B)
	begin
		if(Write_Reg)
			begin
				case(Opt)
					2'b00: begin W_Data=32'h000f_000f;  end
					2'b01: begin W_Data=32'h0f0f_0f00;  end
					2'b10: begin W_Data=32'hf0f0_f0f0;  end 
					2'b11: begin W_Data=32'hffff_ffff;  end
				endcase
			end
		else
			if(A_B)
				begin
					R_Addr_A=Addr;
					case(Opt)
						2'b00: LED=R_Data_A[7:0];
						2'b01: LED=R_Data_A[15:8];
						2'b10: LED=R_Data_A[23:16];
						2'b11: LED=R_Data_A[31:24];
					endcase
				end
			else
				begin
					R_Addr_B=Addr;
					case(Opt)
						2'b00: LED=R_Data_B[7:0];
						2'b01: LED=R_Data_B[15:8];
						2'b10: LED=R_Data_B[23:16];
						2'b11: LED=R_Data_B[31:24];
					endcase
				end
	end
endmodule

```

**寄存器堆实现的Fourth_experiment_first模块**

```verilog
module Fourth_experiment_first(R_Addr_A,R_Addr_B,Write_Reg,R_Data_A,R_Data_B,Reset,Clk,W_Addr,W_Data);
input [4:0]R_Addr_A,R_Addr_B,W_Addr;
input Write_Reg,Reset,Clk;
input[31:0] W_Data;
output [31:0] R_Data_A,R_Data_B;
reg [31:0] REG_Files[0:31];
integer i=0;
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

**测试模块**

```verilog
module Fourth_experiment_test;
	// Inputs
	reg [4:0] Addr;
	reg Write_Reg;
	reg [1:0] Opt;
	reg Clk;
	reg Reset;
	reg A_B;
	// Outputs
	wire [7:0] LED;
	RegisterFile uut (
		.Addr(Addr), 
		.Write_Reg(Write_Reg), 
		.Opt(Opt), 
		.Clk(Clk), 
		.Reset(Reset), 
		.A_B(A_B), 
		.LED(LED)
	);
   always #20 Clk = ~Clk;
	initial begin
		Addr = 5'b00001;
		Write_Reg = 1;
		Opt = 0;
		Clk = 1;
		Reset = 0;
		A_B = 0;
		#100;
      	Addr = 5'b00001;
		Write_Reg = 0;
		Opt = 0;
		A_B = 0; 
	end
endmodule
```

## 代码地址

[代码地址](https://github.com/XdpCs/HDU-computer-organization/tree/master/Fourth_experiment)

## 链接

* 上一页：[实验3-多功能ALU设计实验](./Third_experiment.md)
* 下一页：[实验5-存储器设计实验](./Fifth_experiment.md)