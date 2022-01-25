`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:16:11 12/08/2021
// Design Name:   ALU
// Module Name:   ALU_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_TEST;

	// Inputs
	reg [3:0] ALUCnt;
	reg [31:0] input1;
	reg [31:0] input2;
	reg [4:0] shamt;

	// Outputs
	wire [31:0] result;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.ALUCnt(ALUCnt), 
		.input1(input1), 
		.input2(input2), 
		.shamt(shamt), 
		.result(result), 
		.zero(zero)
	);

	always #50 ALUCnt = (ALUCnt+1)% 8;
	always #25 input1 = $random;
	always #25 input2 = $random;
	initial begin
		// Initialize Inputs
		ALUCnt = 0;
		input1 = 0;
		input2 = 0;
		shamt = 2;

		// Wait 100 ns for global reset to finish
		#300;
        
		// Add stimulus here

	end
      
endmodule

