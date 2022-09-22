`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:01:51 12/21/2020
// Design Name:   Fetch_Inst_Code
// Module Name:   F:/Desktop/FPGA/seventh_experiment/test.v
// Project Name:  seventh_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Fetch_Inst_Code
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
	reg clk;
	reg rst;
	reg [1:0] MUX;

	// Outputs
	wire [7:0] LED;
	wire [5:0] op_code;
	wire [5:0] funct;
	wire [4:0] rs_addr;
	wire [4:0] rt_addr;
	wire [4:0] rd_addr;
	wire [4:0] shamt;
	wire [31:0] Inst_code;

	// Instantiate the Unit Under Test (UUT)
	Fetch_Inst_Code uut (
		.clk(clk), 
		.rst(rst), 
		.LED(LED), 
		.MUX(MUX), 
		.op_code(op_code), 
		.funct(funct), 
		.rs_addr(rs_addr), 
		.rt_addr(rt_addr), 
		.rd_addr(rd_addr), 
		.shamt(shamt), 
		.Inst_code(Inst_code)
	);
	always #33 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		MUX = 0;

		// Wait 100 ns for global reset to finish
		#2;
      rst = 0;
		// Add stimulus here

	end
      
endmodule

