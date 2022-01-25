`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:32 12/23/2021 
// Design Name: 
// Module Name:    WriteBack 
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
module WriteBack(
    input wire MemtoReg,
    input wire [31:0] readData,
    input wire [31:0] ALUResult,
    output wire [31:0] writeData
    );

multiplexer32bit2X1 multiplexer32bit2X1_WriteBack_m (
		readData, 
		ALUResult, 
		MemtoReg, 
		writeData
	);

endmodule
