`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:31:38 12/23/2021
// Design Name:   MIPS
// Module Name:   MIPS_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_TEST;

	// Inputs
	reg clock;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clock(clock)
	);
	always #100 clock = ~clock;
	initial begin
		// Initialize Inputs
		clock = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

