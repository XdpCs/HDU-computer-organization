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
module CPU(clk,rst,OF,ZF,F,ALU_OP,M_R_Data,rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s,Write_Reg,clk_M,R_Data_B,Inst_code);
input clk,rst,clk_M;
wire [31:0]Inst_code;
wire [5:0]op_code,funct;
wire [4:0]rs_addr,rt_addr,rd_addr,shamt;
output [31:0]F;
output OF,ZF;
output [31:0]M_R_Data;
output [2:0]ALU_OP;
wire [31:0]Mem_Addr;
wire [4:0]W_Addr;
output rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s,Write_Reg;
output [31:0]Inst_code;
wire [31:0]imm_data;
wire [31:0]R_Data_A;
output [31:0] R_Data_B;
wire [15:0]imm;
wire [31:0]ALU_B;
wire [31:0]W_Data;
PC pc1(clk,rst,Inst_code);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
assign imm = Inst_code[15:0];
OP_Func op(op_code,funct,Write_Reg,ALU_OP,rd_rt_s,imm_s,rt_imm_s,Mem_Write,alu_mem_s);
assign W_Addr = (rd_rt_s)?rt_addr:rd_addr;
assign imm_data = (imm_s)?{{16{imm[15]}},imm}:{{16{1'b0}},imm};
assign W_Data = alu_mem_s?M_R_Data:F;
Fourth_experiment_first F1(rs_addr,rt_addr,Write_Reg,R_Data_A,R_Data_B,rst,~clk,W_Addr,W_Data);
assign ALU_B = (rt_imm_s)?imm_data:R_Data_B;	
Third_experiment_first T1(OF,ZF,ALU_OP,R_Data_A,ALU_B,F); 
RAM RAM_B (
  .clka(clk_M), // input clka
  .wea(Mem_Write), // input [0 : 0] wea
  .addra(F[5:0]), // input [5 : 0] addra
  .dina(R_Data_B), // input [31 : 0] dina
  .douta(M_R_Data) // output [31 : 0] douta
);
endmodule
