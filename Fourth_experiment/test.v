`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:29:30 12/17/2020
// Design Name:   Fourth_experiment_first
// Module Name:   F:/Desktop/FPGA/Fourth_experiment/test.v
// Project Name:  Fourth_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Fourth_experiment_first
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
	reg [4:0] R_Addr_A;
	reg [4:0] R_Addr_B;
	reg Write_Reg;
	reg Reset;
	reg Clk;
	reg [4:0] W_Addr;
	reg [31:0] W_Data;

	// Outputs
	wire [31:0] R_Data_A;
	wire [31:0] R_Data_B;

	// Instantiate the Unit Under Test (UUT)
	Fourth_experiment_first uut (
		.R_Addr_A(R_Addr_A), 
		.R_Addr_B(R_Addr_B), 
		.Write_Reg(Write_Reg), 
		.R_Data_A(R_Data_A), 
		.R_Data_B(R_Data_B), 
		.Reset(Reset), 
		.Clk(Clk), 
		.W_Addr(W_Addr), 
		.W_Data(W_Data)
	);

	initial begin
		// Initialize Inputs
		R_Addr_A = 5'b00001;;
		R_Addr_B = 5'b00001;
		Write_Reg = 1;
		Reset = 0;
		Clk = 1;
		W_Addr = 5'b00001;
		W_Data = 32'h1111_1111;

		// Wait 100 ns for global reset to finish
		#100;
      R_Addr_A = 5'b00001;;
		R_Addr_B = 5'b00001;
		Write_Reg = 1;
		Reset = 0;
		Clk = 1;
		W_Addr = 5'b00010;
		W_Data = 32'h1111_1111;

		// Add stimulus here

	end
      
endmodule

