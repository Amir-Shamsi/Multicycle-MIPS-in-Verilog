`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:10 12/08/2021 
// Design Name: 
// Module Name:    Execute 
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
module Execute(
    input clock,
    input [31:0] ALUReadData1,
    input [31:0] ALUReadData2,
    input [31:0] immediate,
    input [5:0] funct,
    input [2:0] ALUOp,
    input ALUSrc,
    output wire [31:0] ALUResult,
    output wire zero
    );
	 
	wire [31:0] out_from_mul;
	wire [3:0] ALUCnt;

	multiplexer32bit2X1 multiplexer32bit2X1_m(
		ALUReadData2,
		immediate,
		ALUSrc,
		out_from_mul
	);
	
	ALUControlUnit ALUControlUnit_m(
		ALUOp,
		funct,
		ALUCnt
	);

	ALU alu_m(
		ALUCnt,
		ALUReadData1,
		out_from_mul,
		immediate[10:6], // shamt
		ALUResult,
		zero
	);
endmodule
