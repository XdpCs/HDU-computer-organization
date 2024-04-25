# 实验2-超前进位加法器设计实验

## 实验内容

1. 掌握运用Verilog HDL进行数据流描述与建模的技巧和方法，掌握模块调用与实例引用的方法
2. 掌握超前进位加法器的原理与设计方法

## 解决方法

1. 分析4位的二进制全加器的输入输出，内部为超前进位逻辑
2. 首先，要知道超前进位逻辑与行波进位加法器的区别
3. 行波进位加法器需要像链子一样，等第一位算完，再算第二位，而超前进位加法器是四位同时，第二位包括了第一位的计算部分，从而达到消除依赖的关系
4. 代码展示：

**顶层模块**

```verilog
module second_experiment_first(A,B,F,C4,C0);
input [3:0]A,B;
input C0;
output [3:0]F;
output C4;
	assign G0 = A[0] & B[0];
	assign P0 = A[0] | B[0];
	assign G1 = A[1] & B[1];
	assign P1 = A[1] | B[1];
	assign G2 = A[2] & B[2];
	assign P2 = A[2] | B[2];
	assign G3 = A[3] & B[3];
	assign P3 = A[3] | B[3];
	assign C1 = G0 | P0&C0;
	assign C2 = G1 | P1&G0 | P0&P1&C0;
	assign C3 = G2 | P2&G1 | P2&P1&G0 | P2&P1&P0&C0;
	assign C4 = G3 | P3&G2 | P3&P2&G1 | P3&P2&P1&G0 | P3&P2&P1&P0&C0;
	assign F[0] = A[0]^B[0]^C0;
	assign F[1] = A[1]^B[1]^C1;
	assign F[2] = A[2]^B[2]^C2;
	assign F[3] = A[3]^B[3]^C3;
endmodule
```

**测试模块**

```verilog
module second_experiment_test;
	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg C0;
	// Outputs
	wire [3:0] F;
	wire C4;
	second_experiment_first uut (
		.A(A),
		.B(B),
		.F(F),
		.C4(C4),
		.C0(C0)
	);
	initial begin
		A = 4'b1000;
		B = 4'b1000;
		C0 = 1;
		#100;
		A = 4'b1001;
		B = 4'b1001;
		C0 = 1;
		#100;
		A = 4'b1011;
		B = 4'b1011;
		C0 = 1;
	end
endmodule
```

## 特别注意

**题主在网上看到一份报告中的代码并不是把所有的运算拿过来的，而是把C1赋给C2这样做的，assign这种组合逻辑电路，是并行执行，这样的方法不一定可行**

## 代码地址

[代码地址](https://github.com/XdpCs/HDU-computer-organization/tree/master/Second_experiment)

## 链接

* 上一页：[实验1-全加器设计实验](./First_experiment.md)
* 下一页：[实验3-多功能ALU设计实验](./Third_experiment.md)