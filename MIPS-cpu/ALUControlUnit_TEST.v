`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:31:01 12/06/2021
// Design Name:   ALUControlUnit
// Module Name:   C:/Users/emir/homework/ProgramCounter/ALUControlUnit_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALUControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUControlUnit_TEST;

	// Inputs
	reg [2:0] ALUOp;
	reg [5:0] funct;

	// Outputs
	wire [3:0] ALUCnt;

	// Instantiate the Unit Under Test (UUT)
	ALUControlUnit uut (
		.ALUOp(ALUOp), 
		.funct(funct), 
		.ALUCnt(ALUCnt)
	);
	
	always #20 funct = funct + 1;
	initial begin
		// Initialize Inputs
		ALUOp = 0;
		funct = 0;
		#200 ALUOp = 3'b001;
		#250 ALUOp = 3'b010;
		#300 ALUOp = 3'b011;


		// Wait 100 ns for global reset to finish
		#1000 $finish;
        
		// Add stimulus here

	end
      
endmodule

