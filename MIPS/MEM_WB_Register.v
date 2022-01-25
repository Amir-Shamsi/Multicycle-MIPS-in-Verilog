`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:18:46 12/23/2021 
// Design Name: 
// Module Name:    MEM_WB_Register 
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
module MEM_WB_Register(
    input clock,
    input hit,
    input [31:0] readData,
    input [31:0] ALUResult,
    input [4:0] writeReg,
    input RegWrite,
    input MemtoReg,
    output wire hitOut,
    output reg [31:0] readDataOut,
    output reg [31:0] ALUResultOut,
    output reg [4:0] writeRegOut,
    output reg RegWriteOut,
    output reg MemtoRegOut
    );

always @(negedge clock) begin
	if(hit) begin
		readDataOut = readData;
		ALUResultOut = ALUResult;
		writeRegOut = writeReg;
		writeRegOut = writeReg;
		RegWriteOut = RegWrite;
		MemtoRegOut = MemtoReg;
	end
end
assign hitOut = hit;


endmodule
