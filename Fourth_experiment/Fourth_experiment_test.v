`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:22:08 12/17/2020
// Design Name:   RegisterFile
// Module Name:   F:/Desktop/FPGA/Fourth_experiment/Fourth_experiment_test.v
// Project Name:  Fourth_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Fourth_experiment_test;

	// Inputs
	reg [4:0] Addr;
	reg Write_Reg;
	reg [1:0] Opt;
	reg Clk;
	reg Reset;
	reg A_B;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.Addr(Addr), 
		.Write_Reg(Write_Reg), 
		.Opt(Opt), 
		.Clk(Clk), 
		.Reset(Reset), 
		.A_B(A_B), 
		.LED(LED)
	);
   always #20 Clk = ~Clk;
	initial begin
		// Initialize Inputs
		Addr = 5'b00001;
		Write_Reg = 1;
		Opt = 0;
		Clk = 1;
		Reset = 0;
		A_B = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Addr = 5'b00001;
		Write_Reg = 0;
		Opt = 0;
		A_B = 0; 
		// Add stimulus here

	end
      
endmodule

