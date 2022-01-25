`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:41:22 10/29/2021
// Design Name:   Fetch
// Module Name:   etch_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Fetch_TEST;

	// Inputs
	reg clock;
	reg [31:0] branch_target;
	reg pc_source;

	// Outputs
	wire [31:0] next_pc;
	wire [31:0] instruction;
	wire hit;

	// Instantiate the Unit Under Test (UUT)
	Fetch uut (
		.clock(clock), 
		.branch_target(branch_target), 
		.pc_source(pc_source), 
		.next_pc(next_pc), 
		.instruction(instruction), 
		.hit(hit)
	);

	always #10 clock = ~clock;
	
	initial begin
		// Initialize Inputs
		clock = 0;
		branch_target = 1;
		pc_source = 0;
		
		#500 pc_source = 1;
		#501 pc_source = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

