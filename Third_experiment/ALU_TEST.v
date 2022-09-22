`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:42:20 12/15/2020
// Design Name:   ALU
// Module Name:   F:/Desktop/FPGA/Third_experiment/ALU_TEST.v
// Project Name:  Third_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_TEST;

	// Inputs
	reg [2:0] AB_SW;
	reg [2:0] ALU_OP;
	reg [2:0] F_LED_SW;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.AB_SW(AB_SW), 
		.ALU_OP(ALU_OP), 
		.F_LED_SW(F_LED_SW), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		AB_SW = 3'b001;
		ALU_OP = 3'b000;
		F_LED_SW = 3'b000;

		// Wait 100 ns for global reset to finish
		#100;
      AB_SW = 3'b001;
		ALU_OP = 3'b001;
		F_LED_SW = 3'b000;
		#100;
      AB_SW = 3'b001;
		ALU_OP = 3'b010;
		F_LED_SW = 3'b000;
		// Add stimulus here

	end
      
endmodule

