`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:21:00 11/29/2021
// Design Name:   IF_ID_Register
// Module Name:   IF_ID_Register_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF_ID_Register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IF_ID_Register_TEST;

	// Inputs
	reg clock;
	reg [31:0] next_pc;
	reg [31:0] instruction;
	reg hit;

	// Outputs
	wire [31:0] instruction_out;
	wire [31:0] next_pc_out;
	wire hit_out;

	// Instantiate the Unit Under Test (UUT)
	IF_ID_Register uut (
		.clock(clock), 
		.next_pc(next_pc), 
		.instruction(instruction), 
		.hit(hit), 
		.instruction_out(instruction_out), 
		.next_pc_out(next_pc_out), 
		.hit_out(hit_out)
	);

	always #20 clock <= ~clock;
	always #10 instruction = $random;
	always #10 next_pc = $random;
	always #10 hit <= ~hit;
	
	initial begin
		// Initialize Inputs
		clock = 0;
		next_pc = 0;
		instruction = 0;
		hit = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

