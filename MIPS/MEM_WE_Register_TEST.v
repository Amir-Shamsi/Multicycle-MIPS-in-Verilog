`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:16:46 12/23/2021
// Design Name:   MEM_WB_Register
// Module Name:   MEM_WE_Register_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MEM_WB_Register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MEM_WE_Register_TEST;

	// Inputs
	reg clock;
	reg hit;
	reg [31:0] readData;
	reg [31:0] ALUResult;
	reg [4:0] writeReg;
	reg RegWrite;
	reg MemtoReg;

	// Outputs
	wire hitOut;
	wire [31:0] readDataOut;
	wire [31:0] ALUResultOut;
	wire [4:0] writeRegOut;
	wire RegWriteOut;
	wire MemtoRegOut;

	// Instantiate the Unit Under Test (UUT)
	MEM_WB_Register uut (
		.clock(clock), 
		.hit(hit), 
		.readData(readData), 
		.ALUResult(ALUResult), 
		.writeReg(writeReg), 
		.RegWrite(RegWrite), 
		.MemtoReg(MemtoReg), 
		.hitOut(hitOut), 
		.readDataOut(readDataOut), 
		.ALUResultOut(ALUResultOut), 
		.writeRegOut(writeRegOut), 
		.RegWriteOut(RegWriteOut), 
		.MemtoRegOut(MemtoRegOut)
	);

	always #20 clock =~clock;
	initial begin
		// Initialize Inputs
		clock = 0;
		hit = 0;
		readData = 0;
		ALUResult = 0;
		writeReg = 0;
		RegWrite = 0;
		MemtoReg = 0;

		
		#50 hit = 1;
		#50 readData = 0;
		#50 ALUResult = 0;
		#50 writeReg = 0;
		#50 RegWrite = 0;
		#50 MemtoReg = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

