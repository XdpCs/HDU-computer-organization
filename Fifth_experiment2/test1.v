`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:22:51 12/17/2020
// Design Name:   RAMA
// Module Name:   F:/Desktop/FPGA/Fifth_experiment1/test1.v
// Project Name:  Fifth_experiment1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAMA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg Mem_Read;
	reg Mem_Write;
	reg [5:0] Mem_Addr;
	reg [31:0] M_W_Data;

	// Outputs
	wire [31:0] M_R_Data;

	// Instantiate the Unit Under Test (UUT)
	RAMA uut (
		.Mem_Read(Mem_Read), 
		.Mem_Write(Mem_Write), 
		.Mem_Addr(Mem_Addr), 
		.M_W_Data(M_W_Data), 
		.M_R_Data(M_R_Data)
	);

	initial begin
		// Initialize Inputs
		Mem_Read = 0;
		Mem_Write = 1;
		Mem_Addr = 0;
		M_W_Data = 32'hffff_ffff;

		// Wait 100 ns for global reset to finish
		#100;
      Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 0;
		M_W_Data = 32'hffff_ffff; 
		// Add stimulus here

	end
      
endmodule

