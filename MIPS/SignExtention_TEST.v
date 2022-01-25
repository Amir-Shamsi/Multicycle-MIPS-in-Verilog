`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:37:56 11/05/2021
// Design Name:   ImmExtention
// Module Name:   C:/Users/emir/homework/ProgramCounter/SignExtention_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ImmExtention
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SignExtention_TEST;

	// Inputs
	reg clock;
	reg [15:0] value;

	// Outputs
	wire [31:0] sign_extended_value;

	// Instantiate the Unit Under Test (UUT)
	ImmExtention uut (
		.clock(clock), 
		.value(value), 
		.sign_extended_value(sign_extended_value)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		value = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

