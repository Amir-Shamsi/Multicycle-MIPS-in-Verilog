`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:27:58 01/25/2022
// Design Name:   Multiplexer3to1
// Module Name:   Multiplexe3to1_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Multiplexer3to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Multiplexe3to1_TEST;

	// Inputs
	reg [31:0] input1;
	reg [31:0] input2;
	reg [31:0] input3;
	reg [1:0] signal;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Multiplexer3to1 uut (
		.input1(input1), 
		.input2(input2), 
		.input3(input3), 
		.signal(signal), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		input1 = 0;
		input2 = 0;
		input3 = 0;
		signal = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

