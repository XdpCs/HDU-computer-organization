`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:15 12/18/2020 
// Design Name: 
// Module Name:    CPU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CPU(clk,rst,op_code,funct,rs_addr,rt_addr,rd_addr,shamt,OF,ZF,F,ALU_OP,Inst_code);
input clk,rst;
output [31:0]Inst_code;
output [5:0]op_code,funct;
output [4:0]rs_addr,rt_addr,rd_addr,shamt;
output [31:0]F;
output OF,ZF;
output reg [2:0]ALU_OP;
reg Write_Reg;
wire [31:0]R_Data_A,R_Data_B;
PC pc1(clk,rst,Inst_code);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
Fourth_experiment_first F1(rs_addr,rt_addr,Write_Reg,R_Data_A,R_Data_B,rst,~clk,rd_addr,F);
Third_experiment_first T1(OF,ZF,ALU_OP,R_Data_A,R_Data_B,F); 
always@(*)
	begin	
		Write_Reg<=0;
			ALU_OP=0;
				if(op_code==0)
					Write_Reg<=1;
					begin 
						case(funct)
						6'b100000:ALU_OP=3'b100;
						6'b100010:ALU_OP=3'b101;
						6'b100100:ALU_OP=3'b000;
						6'b100101:ALU_OP=3'b001;
						6'b100110:ALU_OP=3'b010;
						6'b100111:ALU_OP=3'b011;
						6'b101011:ALU_OP=3'b110;
						6'b000100:ALU_OP=3'b111;
						endcase 
					end
				end
endmodule
