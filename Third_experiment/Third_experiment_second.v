`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:23:18 12/15/2020 
// Design Name: 
// Module Name:    Third_experiment_second 
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
module Third_experiment_second(AB_SW,A,B);
input[2:0]AB_SW;
output reg[31:0]A,B;
always @(*)
	begin
		case(AB_SW)
		3'b000:begin A=32'h0000_0000;B=32'h0000_0000;end
		3'b001:begin A=32'h0000_0003;B=32'h0000_0607;end
		3'b010:begin A=32'h8000_0000;B=32'h8000_0000;end
		3'b011:begin A=32'h7FFF_FFFF;B=32'h7FFF_FFFF;end
		3'b100:begin A=32'hFFFF_FFFF;B=32'hFFFF_FFFF;end
		3'b101:begin A=32'h8000_0000;B=32'hFFFF_FFFF;end
		3'b110:begin A=32'hFFFF_FFFF;B=32'h8000_0000;end
		3'b111:begin A=32'h1234_5678;B=32'h3333_2222;end
		default:begin A=32'h9ABC_DEF0;B=32'h1111_2222;end
		endcase
	end
endmodule 