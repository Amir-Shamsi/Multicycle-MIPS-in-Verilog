`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:08:22 12/23/2021
// Design Name:   DataMemory
// Module Name:   C:/Users/emir/homework/ProgramCounter/DataMemory_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DataMemory_TEST;

	// Inputs
	reg clock;
	reg [31:0] address;
	reg [31:0] writeData;
	reg MemRead;
	reg MemWrite;

	// Outputs
	wire [31:0] readData;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.clock(clock), 
		.address(address), 
		.writeData(writeData), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.readData(readData)
	);

	always #20 clock = ~clock;
	initial begin
		// Initialize Inputs
		clock = 0;
		address = 45;
		writeData = $random;
		MemRead = 0;
		MemWrite = 0;
		
		#50 MemWrite = 1;
		#70 MemWrite = 0;
		#70 MemRead = 1;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

