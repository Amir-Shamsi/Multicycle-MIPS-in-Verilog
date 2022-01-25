`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:36 01/22/2022 
// Design Name: 
// Module Name:    Multiplexer3to1 
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
module Multiplexer3to1(
    input [31:0] input1,
    input [31:0] input2,
    input [31:0] input3,
	 input [1:0]signal,
    output [31:0] result
    );

	
	
	assign out = signal==1? input2 : signal==0? input1 : input3 ;
	
endmodule
