`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:32:03 12/15/2020
// Design Name:   second_experiment_first
// Module Name:   F:/Desktop/FPGA/second_experiment/second_experiment_test.v
// Project Name:  second_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: second_experiment_first
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module second_experiment_test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire [3:0] F;
	wire C4;

	// Instantiate the Unit Under Test (UUT)
	second_experiment_first uut (
		.A(A), 
		.B(B), 
		.F(F), 
		.C4(C4), 
		.C0(C0)
	);

	initial begin
		// Initialize Inputs
		A = 4'b1000;
		B = 4'b1000;
		C0 = 1;

		// Wait 100 ns for global reset to finish
		#100;
		A = 4'b1001;
		B = 4'b1001;
		C0 = 1;
        
		// Add stimulus here
		#100;
		A = 4'b1011;
		B = 4'b1011;
		C0 = 1;
        
	end
      
endmodule

