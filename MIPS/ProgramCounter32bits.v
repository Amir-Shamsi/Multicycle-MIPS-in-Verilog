`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:       Amir Shamsi
// 
// Create Date:    21:54:19 10/03/2021 
// Design Name: 
// Module Name:    ProgramCounter32bits 
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
module ProgramCounter32bits(
    input [31:0] input1,
    input clock,
    input hit,
    output reg [31:0] out
    );

    always @(negedge clock)
    begin
	if (hit)
		out = input1;
    end

endmodule
