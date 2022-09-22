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
module CPU(clk,rst,OF,ZF,F,ALU_OP,M_R_Data,w_r_s,imm_s,rt_imm_s,Mem_Write,Write_Reg,PC,PC_s,clk_M,R_Data_B,Inst_code);
input clk,rst,clk_M;
output [31:0]Inst_code;
wire [5:0]op_code,funct;
wire [4:0]rs_addr,rt_addr,rd_addr,shamt;
output [31:0]F;
output OF,ZF;
output [31:0]M_R_Data;
output [2:0]ALU_OP;
wire [31:0]Mem_Addr;
wire [4:0]W_Addr;
output imm_s,rt_imm_s,Mem_Write,Write_Reg;
output [1:0]w_r_s;
wire [31:0]imm_data;
wire [31:0]R_Data_A;
output [31:0]R_Data_B;
wire [15:0]imm;
wire [31:0]ALU_B;
wire [31:0]W_Data;
output [1:0]PC_s;
wire [25:0]address;
wire [1:0]wr_data_s;
wire [31:0]PC_new;
output [31:0]PC;
PC pc1(clk,rst,Inst_code,PC_s,R_Data_A,address,PC,imm_data,PC_new);
assign op_code = Inst_code[31:26];
assign rs_addr = Inst_code[25:21];
assign rt_addr = Inst_code[20:16];
assign rd_addr = Inst_code[15:11];
assign shamt = Inst_code[10:6];
assign funct = Inst_code[5:0];
assign imm = Inst_code[15:0];
assign address = Inst_code[25:0];
OP_Func op(op_code,funct,Write_Reg,ALU_OP,w_r_s,imm_s,rt_imm_s,Mem_Write,wr_data_s,PC_s,ZF);
assign W_Addr = (w_r_s[1])?5'b11111:((w_r_s[0])?rt_addr:rd_addr);
assign imm_data = (imm_s)?{{16{imm[15]}},imm}:{{16{1'b0}},imm};
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
assign W_Data = (wr_data_s[1])?PC+4:((wr_data_s[0])? M_R_Data:F);
endmodule
