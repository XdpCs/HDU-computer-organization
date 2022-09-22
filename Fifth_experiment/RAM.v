`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:21:25 12/17/2020 
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
input [7:2]Mem_Addr,
input [1:0]MUX,		
input Mem_Write,			
input Clk,			
output reg [7:0]LED);
wire [31:0]M_R_Data;	
reg [31:0]M_W_Data;	
RAM_B your_instance_name (
  .clka(Clk), // input clka
  .wea(Mem_Write), // input [0 : 0] wea
  .addra(Mem_Addr), // input [5 : 0] addra
  .dina(M_W_Data), // input [31 : 0] dina
  .douta(M_R_Data) // output [31 : 0] douta
);
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
	else
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
