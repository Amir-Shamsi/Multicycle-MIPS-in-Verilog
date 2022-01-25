`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:02:44 12/23/2021
// Design Name:   WriteBack
// Module Name:   WriteBack_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: WriteBack
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module WriteBack_TEST;

	// Inputs
	reg MemtoReg;
	reg [31:0] readData;
	reg [31:0] ALUResult;

	// Outputs
	wire [31:0] writeData;

	// Instantiate the Unit Under Test (UUT)
	WriteBack uut (
		.MemtoReg(MemtoReg), 
		.readData(readData), 
		.ALUResult(ALUResult), 
		.writeData(writeData)
	);

	initial begin
		// Initialize Inputs
		MemtoReg = 0;
		readData = $random;
		ALUResult = 0;

		#50 MemtoReg = 1;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

