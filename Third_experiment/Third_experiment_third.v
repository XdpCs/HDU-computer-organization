`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:07 12/15/2020 
// Design Name: 
// Module Name:    Third_experiment_third 
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
module Third_experiment_third(F_LED_SW,LED,F,ZF,OF);
input[31:0]F;
input ZF,OF;
input[2:0] F_LED_SW;
output reg[7:0] LED;
always@(*)
	begin
		case(F_LED_SW)
			3'b000:LED=F[7:0];
			3'b001:LED=F[15:8];
			3'b010:LED=F[23:16];
			3'b011:LED=F[31:24];
			default:begin LED[7]=ZF;LED[0]=OF;LED[6:1]=6'b0;end
		endcase
	end

endmodule
