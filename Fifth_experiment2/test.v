`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:24:14 12/17/2020
// Design Name:   RAM
// Module Name:   F:/Desktop/FPGA/Fifth_experiment1/test.v
// Project Name:  Fifth_experiment1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
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
	reg [5:0] Mem_Addr;
	reg [1:0] MUX;
	reg Mem_Write;
	reg Mem_Read;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.Mem_Addr(Mem_Addr), 
		.MUX(MUX), 
		.Mem_Write(Mem_Write), 
		.Mem_Read(Mem_Read), 
		.LED(LED)
	);
	initial begin
		// Initialize Inputs
		Mem_Addr = 0;
		MUX = 0;
		Mem_Write = 1;
		Mem_Read = 0;

		// Wait 100 ns for global reset to finish
		#100;
      Mem_Addr = 0;
		MUX = 0;
		Mem_Write = 0;
		Mem_Read = 1;  
		// Add stimulus here

	end
      
endmodule

