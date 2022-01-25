`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:09:50 11/05/2021 
// Design Name: 
// Module Name:    Decode 
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
module Decode(
    input clock,
    input [31:0] instruction,
	 input RegWrite,
	 input [4:0]write_reg,
	 input [31:0] write_data,
    output wire [5:0] opcode,
    output wire [31:0] read_data1,
    output wire [31:0] read_data2,
    output wire [31:0] sign_extended_immediate,
    output wire [4:0] rt,
    output wire [4:0] rd
    );
	
	SignExtension sign_extension_m(
		clock,
		instruction[15:0],
		sign_extended_immediate
		);
		
	RegisterFile register_file_m(
	 clock,
    RegWrite,
    instruction[25:21],
    instruction[20:16],
    write_reg,
    write_data,
    read_data1,
    read_data2
    );
	 
	assign rd = (instruction[31:26] == 0)?{instruction[15:11]}: {5'b0};
	assign rt = {instruction[20:16]};
   assign opcode = {instruction[31:26]};
	
endmodule
