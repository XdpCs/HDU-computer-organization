`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:51:37 12/21/2020
// Design Name:   ALU
// Module Name:   F:/Desktop/FPGA/Third_experiment/TEST.v
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

module TEST;

	// Inputs
	reg [2:0] AB_SW;
	reg [2:0] ALU_OP;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.AB_SW(AB_SW), 
		.ALU_OP(ALU_OP)
	);

	initial begin
		// Initialize Inputs
		AB_SW = 0;
		ALU_OP = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
      AB_SW = 0;
		ALU_OP = 3'b001;  
		// Add stimulus here

	end
      
endmodule

