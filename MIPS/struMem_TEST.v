`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:14:22 10/04/2021
// Design Name:   InstructionMemory
// Module Name:   C:/Users/emir/homework/ProgramCounter/struMem_TEST.v
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

module struMem_TEST;

	// Inputs
	reg [31:0] address;
	reg clock;
	
	// Output
	wire [31:0] inst;

	always #10 clock <= ~clock;
	always #10 address <= address + 32'b00000000000000000000000000000001;


	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.address(address), 
		.clock(clock), 
		.inst(inst)
	);

	initial begin
		// Initialize Inputs
		address <= 32'h000000;
		clock <= 0;

		// Wait 100 ns for global reset to finish
		#100 $finish;
        
		// Add stimulus here

	end
      
endmodule

