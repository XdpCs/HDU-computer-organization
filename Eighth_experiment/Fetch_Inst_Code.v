`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:34:30 12/18/2020 
// Design Name: 
// Module Name:    Fetch_Inst_Code 
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
module Fetch_Inst_Code(clk,rst,op_code,funct,rs_addr,rt_addr,rd_addr,shamt);
input clk,rst;
wire [31:0]Inst_code;
reg [31:0]PC;
wire [31:0]PC_new;
output [5:0]op_code,funct;
output [4:0]rs_addr,rt_addr,rd_addr,shamt;
PC pc1(clk,rst,Inst_code);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
endmodule
