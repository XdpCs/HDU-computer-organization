# 实验3-多功能ALU设计实验

## 实验内容

1. 学习多功能ALU的工作原理，掌握运算器的设计方法
2. 掌握运用Verilog HDL 进行行为描述与建模的技巧和方法

## 解决方法

1. 分析一个具有8种运算功能的32位ALU，并能够产生运算结果的标志：结果位零标志（ZF）和溢出标志（OF）
2. 首先，分析出ZF只会在加减运算中出现溢出情况，然后分析出ALU 8种计算如何表达，如果使用“-”，就不用考虑如何减法**
3. 代码展示：

**顶层模块：**

```verilog
module ALU(AB_SW,ALU_OP,F_LED_SW,LED);
input[2:0]AB_SW,ALU_OP,F_LED_SW;
output[7:0]LED;
wire [31:0]A,B,F;
wire ZF,OF;
Third_experiment_second T2(AB_SW,A,B); 
Third_experiment_first T1(OF,ZF,ALU_OP,A,B,F); 
Third_experiment_third T3(F_LED_SW,LED,F,ZF,OF);

endmodule
```

**Third_experiment_second模块（作为数据输入）**

```verilog
module Third_experiment_second(AB_SW,A,B);
input[2:0]AB_SW;
output reg[31:0]A,B;
always @(*)
	begin
		case(AB_SW)
		3'b000:begin A=32'h0000_0000;B=32'h0000_0000;end
		3'b001:begin A=32'h0000_0003;B=32'h0000_0607;end
		3'b010:begin A=32'h8000_0000;B=32'h8000_0000;end
		3'b011:begin A=32'h7FFF_FFFF;B=32'h7FFF_FFFF;end
		3'b100:begin A=32'hFFFF_FFFF;B=32'hFFFF_FFFF;end
		3'b101:begin A=32'h8000_0000;B=32'hFFFF_FFFF;end
		3'b110:begin A=32'hFFFF_FFFF;B=32'h8000_0000;end
		3'b111:begin A=32'h1234_5678;B=32'h3333_2222;end
		default:begin A=32'h9ABC_DEF0;B=32'h1111_2222;end
		endcase
	end
endmodule 
```

**Third_experiment_first模块（运算）**

```verilog
module Third_experiment_first(OF,ZF,ALU_OP,A,B,F);
input [2:0]ALU_OP;
input [31:0]A,B;
output reg[31:0]F;
reg C32;
output reg OF=0;
output reg ZF=0;
always @(ALU_OP or A or B)
 begin
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
	OF=C32^F[31]^A[31]^B[31];	
	end
endmodule
```

**Third_experiment_third模块（作为LED显示）**

```verilog
module Third_experiment_third(F_LED_SW,LED,F,ZF,OF);
input[31:0]F;
input ZF,OF;
input[2:0] F_LED_SW;
output reg[7:0] LED;
always@(*)
	begin
		case(F_LED_SW)
			3'b000:LED=F[7:0];
			3'b001:LED=F[15:8];
			3'b010:LED=F[23:16];
			3'b011:LED=F[31:24];
			default:begin LED[7]=ZF;LED[0]=OF;LED[6:1]=6'b0;end
		endcase
	end

endmodule

```

**测试模块**

```verilog
module ALU_TEST;
	// Inputs
	reg [2:0] AB_SW;
	reg [2:0] ALU_OP;
	reg [2:0] F_LED_SW;
	// Outputs
	wire [7:0] LED;
	ALU uut (
		.AB_SW(AB_SW), 
		.ALU_OP(ALU_OP), 
		.F_LED_SW(F_LED_SW), 
		.LED(LED)
	);
	initial begin
		AB_SW = 3'b001;
		ALU_OP = 3'b000;
		F_LED_SW = 3'b000;
		#100;
     	AB_SW = 3'b001;
		ALU_OP = 3'b001;
		F_LED_SW = 3'b000;
		#100;
      	AB_SW = 3'b001;
		ALU_OP = 3'b010;
		F_LED_SW = 3'b000;
	end   
endmodule
```

## 特别注意

**当时在做实验的时候，有的朋友问我begin...end是干什么用，其实就是相当于C语言中的大括号**

## 代码地址

[代码地址](../Third_experiment)

## 链接

* 上一页：[实验2-超前进位加法器设计实验](./Second_experiment.md)
* 下一页：[实验4-寄存器堆设计实验](./Fourth_experiment.md)