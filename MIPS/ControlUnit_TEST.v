`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:51:51 11/28/2021
// Design Name:   ControlUnit
// Module Name:   ControlUnit_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ControlUnit_TEST;

	 reg [5:0] opcode; 
	 wire RegDst;
    wire ALUSrc;
    wire MemtoReg;
    wire RegWrite;
    wire MemRead;
    wire MemWrite;
    wire Branch;
    wire [1:0] ALUOp;
	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
	 .opcode(opcode),
	 .RegDst(RegDst),
    .ALUSrc(ALUSrc),
    .MemtoReg(MemtoReg),
    .RegWrite(RegWrite),
    .MemRead(MemRead),
    .MemWrite(MemWrite),
    .Branch(Branch),
    .ALUOp(ALUOp)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		// Wait 100 ns for global reset to finish
		#20 opcode = 6'b000100;
		#20 opcode = 6'b000101;
		#20 opcode = 6'b000111;
		#20 opcode = 6'b000110;
		#20 opcode = 6'b000001;
      
		#120 $finish;
		// Add stimulus here

	end
      
endmodule

