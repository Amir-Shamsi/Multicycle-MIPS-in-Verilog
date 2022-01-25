`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:50:10 01/25/2022
// Design Name:   Adder
// Module Name:   Adder_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Adder_TEST;

	// Inputs
	reg clock;
	reg [31:0] input1;
	reg [31:0] input2;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Adder uut (
		.clock(clock), 
		.input1(input1), 
		.input2(input2), 
		.result(result)
	);

	always #50 clock = ~clock;
	initial begin
		// Initialize Inputs
		clock = 0;
		input1 = 0;
		input2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

