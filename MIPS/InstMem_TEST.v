`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:      Amir Shamsi
//
// Create Date:   22:33:41 10/04/2021
// Design Name:   InstructionMemory
// Module Name:   InstMem_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstructionMemory_TEST;

	// Inputs
	reg [31:0] address;
	reg clock;
	
	// Output
	wire [127:0] dataline;

	always #20 clock <= ~clock;
	always #100 address <= address + 32'b00000000000000000000000000000100;


	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.address(address), 
		.clock(clock), 
		.dataline(dataline)
	);

	initial begin
		// Initialize Inputs
		address <= 32'h000000;
		clock <= 0;

		// Wait 100 ns for global reset to finish
		#1000 $finish;
        
		// Add stimulus here

	end
      
endmodule

