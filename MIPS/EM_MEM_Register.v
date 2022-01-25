`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:54 12/23/2021 
// Design Name: 
// Module Name:    EM_MEM_Register 
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
module EM_MEM_Register(
    input clock,
    input wire hit,
    input [31:0] branchTarget,
    input zeroFlag,
    input [31:0] ALUResult,
    input [31:0] readData2,
    input [4:0] writeReg,
    input MemRead,
    input MemWrite,
    input Branch,
    input RegWrite,
    input MemToReg,
    input jumpSignal,
    output reg [31:0] branchTargetOut,
    output reg zeroFlagOut,
    output reg [31:0] ALUResultOut,
    output reg [31:0] readData2Out,
    output reg [4:0] writeRegOut,
    output reg MemReadOut,
    output reg MemWriteOut,
    output reg BranchOut,
    output reg RegWriteOut,
    output reg MemToRegOut,
    output wire hitOut,
    output reg jumpSignalOut
    );

always @(negedge clock) begin
	if (hit) begin
		branchTargetOut = branchTarget;
		zeroFlagOut = zeroFlag;
		ALUResultOut = ALUResult;
		readData2Out = readData2;
		writeRegOut = writeReg;
		MemReadOut = MemRead;
		MemWriteOut = MemWrite;
		BranchOut = Branch;
		RegWriteOut = RegWrite;
		MemToRegOut = MemToReg;
		jumpSignalOut = jumpSignal;
	end
end
assign hitOut = hit;




endmodule
