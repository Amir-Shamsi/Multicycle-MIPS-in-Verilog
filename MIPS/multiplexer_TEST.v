`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:      Amir Shamsi
//
// Create Date:   10:50:09 10/03/2021
// Design Name:   multiplexer32bit2X1
// Module Name:   C:/Users/****/homework/multiplexer_TEST.v
// Project Name:  homework
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplexer32bit2X1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [31:0] input1;
	reg [31:0] input2;
	reg select;

	// Outputs
	wire [31:0] out;


	always #25 select <= ~select;
	// Instantiate the Unit Under Test (UUT)
	multiplexer32bit2X1 uut (
		.input1(input1), 
		.input2(input2), 
		.select(select), 
		.out(out)
	);

	initial begin

		// Initialize Inputs
		input1 = 32'b01110000001110101101001100110001;
		input2 = 32'b10101111011100100010110110111010;
		select = 0;
		
		#100;
	end
	
      
endmodule

