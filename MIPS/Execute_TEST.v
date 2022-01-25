`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:38:27 12/08/2021
// Design Name:   Execute
// Module Name:   Execute_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Execute
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Execute_TEST;

	// Inputs
	reg clock;
	reg [31:0] ALUReadData1;
	reg [31:0] ALUReadData2;
	reg [31:0] immediate;
	reg [5:0] funct;
	reg [2:0] ALUOp;
	reg ALUSrc;

	// Outputs
	wire [31:0] ALUResult;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	Execute uut (
		.clock(clock), 
		.ALUReadData1(ALUReadData1), 
		.ALUReadData2(ALUReadData2), 
		.immediate(immediate), 
		.funct(funct), 
		.ALUOp(ALUOp), 
		.ALUSrc(ALUSrc), 
		.ALUResult(ALUResult), 
		.zero(zero)
	);

	always #25 clock = ~clock;
	always #50 ALUReadData1 = $random;
	always #50 ALUReadData2 = $random;
	always #50 immediate = $random;
	always #50 funct = $random;
	always #50 ALUOp = $random;
	always #50 ALUSrc = $random;
	
	initial begin
		// Initialize Inputs
		clock = 0;
		ALUReadData1 = 0;
		ALUReadData2 = 0;
		immediate = 0;
		funct = 0;
		ALUOp = 0;
		ALUSrc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

