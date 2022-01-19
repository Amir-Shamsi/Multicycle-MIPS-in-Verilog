`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:39:47 10/28/2021
// Design Name:   cache
// Module Name:   C:/Users/emir/homework/ProgramCounter/cache_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cache
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cache_TEST;

	// Inputs
	reg clock;
	reg [31:0] address;
	reg [127:0] data_line;

	// Outputs
	wire hit;
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	cache uut (
		.clock(clock), 
		.address(address), 
		.data_line(data_line), 
		.hit(hit), 
		.instruction(instruction)
	);
	always #10 clock <= ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		address <= 32'b00000000000000000000000010000100;
		data_line <= {$random, $random, $random, $random};
	
		#500 address <= 32'b00000000000000000000000110101100;
		#1000 $finish;
        
		// Add stimulus here

	end
      
endmodule

