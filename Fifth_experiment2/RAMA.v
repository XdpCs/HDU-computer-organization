`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:20:59 12/17/2020 
// Design Name: 
// Module Name:    RAMA 
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
module RAMA(Mem_Read,Mem_Write,Mem_Addr,M_W_Data,M_R_Data);
input Mem_Read,Mem_Write;
input [5:0]Mem_Addr;
input [31:0]M_W_Data;
output reg[31:0]M_R_Data;
reg [0:31]memory[0:63];
//M_R_Data <= Mem_Read?memory[Mem_Addr]:32'bz;
always@(*)
	if(Mem_Write)
			memory[Mem_Addr]<=M_W_Data;
	else if(Mem_Read)
			M_R_Data <= memory[Mem_Addr];
endmodule

