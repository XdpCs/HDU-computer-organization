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
module Fetch_Inst_Code(clk,rst,LED,MUX,op_code,funct,rs_addr,rt_addr,rd_addr,shamt,Inst_code);
input clk,rst;
input [1:0]MUX;
output [31:0]Inst_code;
output reg[7:0]LED;
reg [31:0]PC;
wire [31:0]PC_new;
output [5:0]op_code,funct;//指令分段
output [4:0]rs_addr,rt_addr,rd_addr,shamt;//指令分段
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
