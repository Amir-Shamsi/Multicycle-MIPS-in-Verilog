`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:21:52 11/06/2021
// Design Name:   Decode
// Module Name:   C:/Users/emir/homework/ProgramCounter/Decoder_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Decoder_TEST;

	// Inputs
	reg clock;
	reg [31:0] instruction;
	reg RegWrite;
	reg [31:0] write_data;
	reg [4:0] write_reg;

	// Outputs
	wire [5:0] opcode;
	wire [31:0] read_data1;
	wire [31:0] read_data2;
	wire [31:0] sign_extended_immediate;
	wire [4:0] rt;
	wire [4:0] rd;

	// Instantiate the Unit Under Test (UUT)
	Decode uut (
		.clock(clock), 
		.instruction(instruction), 
		.RegWrite(RegWrite), 		
		.write_reg(write_reg), 
		.write_data(write_data), 
		.opcode(opcode), 
		.read_data1(read_data1), 
		.read_data2(read_data2), 
		.sign_extended_immediate(sign_extended_immediate), 
		.rt(rt), 
		.rd(rd)
	);

	always #10 clock <= ~clock;
	always #20 RegWrite <= ~RegWrite;
	always #100 instruction = $random;
	always #20 write_data = $random;
	always #30 write_reg = write_reg + 6'b1;
	initial begin
		// Initialize Inputs
		clock = 0;
		instruction = 0;
		RegWrite = 0;
		write_data = $random;
		write_reg = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

