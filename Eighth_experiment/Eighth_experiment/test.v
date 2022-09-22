`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:09:35 12/23/2020
// Design Name:   CPU
// Module Name:   F:/Desktop/FPGA/eighth_experiment/test.v
// Project Name:  seventh_experiment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
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

	// Outputs
	wire [5:0] op_code;
	wire [5:0] funct;
	wire [4:0] rs_addr;
	wire [4:0] rt_addr;
	wire [4:0] rd_addr;
	wire [4:0] shamt;
	wire OF;
	wire ZF;
	wire [31:0] F;
	wire [2:0] ALU_OP;
	wire [31:0] Inst_code;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.rst(rst), 
		.op_code(op_code), 
		.funct(funct), 
		.rs_addr(rs_addr), 
		.rt_addr(rt_addr), 
		.rd_addr(rd_addr), 
		.shamt(shamt), 
		.OF(OF), 
		.ZF(ZF), 
		.F(F), 
		.ALU_OP(ALU_OP), 
		.Inst_code(Inst_code)
	);
	always #20 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#2;
      rst = 0;  
		// Add stimulus here

	end
      
endmodule

