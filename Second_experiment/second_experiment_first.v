`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:17 12/15/2020 
// Design Name: 
// Module Name:    second_experiment_first 
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
