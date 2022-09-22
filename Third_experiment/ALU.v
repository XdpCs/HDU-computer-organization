`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:35:07 12/15/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(AB_SW,ALU_OP,F,OF,ZF);
input[2:0]AB_SW,ALU_OP;
wire [31:0]A,B;
output [31:0]F;
output ZF,OF;
Third_experiment_second TS(AB_SW,A,B);
Third_experiment_first TF(OF,ZF,ALU_OP,A,B,F);
endmodule
