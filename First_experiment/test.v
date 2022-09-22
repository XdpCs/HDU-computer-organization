`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:14:55 12/09/2020
// Design Name:   First_Experiment_Add
// Module Name:   F:/Desktop/FPGA/First_experiment/test.v
// Project Name:  First_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: First_Experiment_Add
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg A;
	reg B;
	reg Ci;

	// Outputs
	wire F;
	wire C;

	// Instantiate the Unit Under Test (UUT)
	First_Experiment_Add uut (
		.A(A), 
		.B(B), 
		.Ci(Ci), 
		.F(F), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Ci = 0;

		// Wait 100 ns for global reset to finish
		#100;
      A = 1;
		B = 0;
		Ci = 0;
		// Add stimulus here
		#100;
      A = 1;
		B = 1;
		Ci = 0;
		#100;
      A = 1;
		B = 1;
		Ci = 1;
	end
      
endmodule

