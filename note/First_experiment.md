# 实验1-全加器设计实验

## 实验内容

1. 学习ISE工具软件的使用及仿真方法
2. 学习FPGA程序的下载方式
3. 熟悉Nexys3实验板
4. 掌握运用Verilog HDL 进行结构描述与建模的技术和方法
5. 掌握二进制全加器的原理与设计

## 解决方法

1. 分析二进制全加器的输入输出，然后得出两个输出端口的门电路。
2. 使用ISE内部门级电路进行组合，最后实现实验所需的效果
3. 代码展示：

**顶层模块：**

```verilog
module First_Experiment_Add(A,B,Ci,F,C);
input A,B,Ci;
output F,C;
xor	XU1(F,A,B,Ci),
		XU2(Q,A,B);
and	AN1(W,Q,Ci),
		AN2(E,A,B);
or		OR1(C,W,E);
endmodule
```

**测试模块：**

```verilog
module test;
	// Inputs
	reg A;
	reg B;
	reg Ci;
	// Outputs
	wire F;
	wire C;
	First_Experiment_Add uut (
		.A(A), 
		.B(B), 
		.Ci(Ci), 
		.F(F), 
		.C(C)
	);
	initial begin
		A = 0;
		B = 0;
		Ci = 0;
		#100;
        A = 1;
		B = 0;
		Ci = 0;
		#100;
        A = 1;
		B = 1;
		Ci = 0;
		#100;
        A = 1;
		B = 1;
		Ci = 1;
	end
endmodule
```

## 代码地址

[代码地址](../First_experiment)

## 链接

* 下一页：[实验2-超前进位加法器设计实验](./Second_experiment.md)