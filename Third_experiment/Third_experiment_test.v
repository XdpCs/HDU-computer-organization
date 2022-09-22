`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:16:07 12/15/2020
// Design Name:   Third_experiment_first
// Module Name:   F:/Desktop/FPGA/Third_experiment/Third_experiment_test.v
// Project Name:  Third_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Third_experiment_first
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Third_experiment_test;

	// Inputs
	reg [2:0] ALU_OP;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire OF;
	wire ZF;
	wire [31:0] F;

	// Instantiate the Unit Under Test (UUT)
	Third_experiment_first uut (
		.OF(OF), 
		.ZF(ZF), 
		.ALU_OP(ALU_OP), 
		.A(A), 
		.B(B), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		ALU_OP = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

