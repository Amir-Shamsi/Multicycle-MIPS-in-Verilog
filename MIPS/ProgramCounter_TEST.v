`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:      Amir Shamsi
//
// Create Date:   22:00:37 10/03/2021
// Design Name:   ProgramCounter32bits
// Module Name:   ProgramCounter_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter32bits
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ProgramCounter_TEST;

	// Inputs
	reg [31:0] input1;
	reg clock;
	reg hit;

	// Outputs
	wire [31:0] out;

	always #20 clock <= ~clock;
	always #30 hit <= ~hit;
	always #15 input1 <= input1 + 32'b00000000000000000000000000000100;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter32bits uut (
		.input1(input1), 
		.clock(clock),
		.hit(hit),
		.out(out)
	);

	initial begin
		// Initialize Inputs

		input1 <= 32'h000000;
		clock <= 0;
		hit <= 0;
		
		
		// Wait 1000 ns for global reset to finish
		#1000 $finish;
        
		// Add stimulus here

	end
      
endmodule

