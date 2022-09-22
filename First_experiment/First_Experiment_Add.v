`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:04:21 12/09/2020 
// Design Name: 
// Module Name:    First_Experiment_Add 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module First_Experiment_Add(A,B,Ci,F,C);
input A,B,Ci;
output F,C;
xor	XU1(F,A,B,Ci),
		XU2(Q,A,B);
and	AN1(W,Q,Ci),
		AN2(E,A,B);
or		OR1(C,W,E);
endmodule
