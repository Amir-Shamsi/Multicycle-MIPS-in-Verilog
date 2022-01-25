`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:22:16 12/23/2021
// Design Name:   EM_MEM_Register
// Module Name:   C:/Users/emir/homework/ProgramCounter/EM_MEM_Register_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EM_MEM_Register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EM_MEM_Register_TEST;

	// Inputs
	reg clock;
	reg hit;
	reg [31:0] branchTarget;
	reg zeroFlag;
	reg [31:0] ALUResult;
	reg [31:0] readData2;
	reg [4:0] writeReg;
	reg MemRead;
	reg MemWrite;
	reg Branch;
	reg RegWrite;
	reg MemToReg;

	// Outputs
	wire [31:0] branchTargetOut;
	wire zeroFlagOut;
	wire [31:0] ALUResultOut;
	wire [31:0] readData2Out;
	wire [4:0] writeRegOut;
	wire MemReadOut;
	wire MemWriteOut;
	wire BranchOut;
	wire RegWriteOut;
	wire MemToRegOut;
	wire hitOut;

	// Instantiate the Unit Under Test (UUT)
	EM_MEM_Register uut (
		.clock(clock), 
		.hit(hit), 
		.branchTarget(branchTarget), 
		.zeroFlag(zeroFlag), 
		.ALUResult(ALUResult), 
		.readData2(readData2), 
		.writeReg(writeReg), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.RegWrite(RegWrite), 
		.MemToReg(MemToReg), 
		.branchTargetOut(branchTargetOut), 
		.zeroFlagOut(zeroFlagOut), 
		.ALUResultOut(ALUResultOut), 
		.readData2Out(readData2Out), 
		.writeRegOut(writeRegOut), 
		.MemReadOut(MemReadOut), 
		.MemWriteOut(MemWriteOut), 
		.BranchOut(BranchOut), 
		.RegWriteOut(RegWriteOut), 
		.MemToRegOut(MemToRegOut), 
		.hitOut(hitOut)
	);

	always #20 clock =~clock;
	initial begin
		// Initialize Inputs
		clock = 0;
		hit = 0;
		branchTarget = 0;
		zeroFlag = 0;
		ALUResult = 0;
		readData2 = 0;
		writeReg = 0;
		MemRead = 0;
		MemWrite = 0;
		Branch = 0;
		RegWrite = 0;
		MemToReg = 0;

		#50 hit = 1;
		#50 branchTarget = 0;
		#50 zeroFlag = 0;
		#50 ALUResult = 0;
		#50 readData2 = 0;
		#50 writeReg = 0;
		#50 MemRead = 0;
		#50 MemWrite = 0;
		#50 Branch = 0;
		#50 RegWrite = 0;
		#50 MemToReg = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

