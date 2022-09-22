`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:57:35 12/17/2020 
// Design Name: 
// Module Name:    RAM 
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
module RAM(
input [5:0]Mem_Addr,
input [1:0]MUX,		
input Mem_Write,
input Mem_Read,			
output reg [7:0]LED);
wire [31:0]M_R_Data;	
reg [31:0]M_W_Data;		
RAMA ram (Mem_Read,Mem_Write,Mem_Addr,M_W_Data,M_R_Data);
always @(*)
	begin
	LED = 0;
	M_W_Data = 0;
	if(Mem_Write)
		begin 
			case(MUX)  
			2'b00:	M_W_Data = 32'h0000_000F;
			2'b01:	M_W_Data = 32'h0000_0DB0;
			2'b10:	M_W_Data = 32'h003C_C381;
			2'b11:	M_W_Data = 32'hFFFF_FFFF;	
			endcase 
		end
	else if(Mem_Read)
			begin
				case(MUX)
					2'b00:	LED = M_R_Data[7:0];
					2'b01:	LED = M_R_Data[15:8];
					2'b10:	LED = M_R_Data[23:16];
					2'b11:	LED = M_R_Data[31:24];	
				endcase
			end
	end
endmodule
