`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:34:47 12/16/2020 
// Design Name: 
// Module Name:    Fourth_experiment_first 
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
module Fourth_experiment_first(R_Addr_A,R_Addr_B,Write_Reg,R_Data_A,R_Data_B,Reset,Clk,W_Addr,W_Data);
input [4:0]R_Addr_A,R_Addr_B,W_Addr;
input Write_Reg,Reset,Clk;
input[31:0] W_Data;
output [31:0] R_Data_A,R_Data_B;
reg [31:0] REG_Files[0:31];
integer i=0;
initial
        for(i=0;i<32;i=i+1) REG_Files[i]<=0;
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
