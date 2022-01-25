`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:42:29 11/05/2021
// Design Name:   RegisterFile
// Module Name:   RegisterFile_TEST.v
// Project Name:  ProgramCounter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegisterFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegisterFile_TEST;

	// Inputs
	reg clock;
	reg RegWrite;
	reg [4:0] read_reg1;
	reg [4:0] read_reg2;
	reg [4:0] write_reg;
	reg [31:0] write_data;

	// Outputs
	wire [31:0] read_data1;
	wire [31:0] read_data2;

	always #10 clock = ~clock;
	always #20 RegWrite = ~RegWrite;
	
	// Instantiate the Unit Under Test (UUT)
	RegisterFile uut (
		.clock(clock), 
		.RegWrite(RegWrite), 
		.read_reg1(read_reg1), 
		.read_reg2(read_reg2), 
		.write_reg(write_reg), 
		.write_data(write_data), 
		.read_data1(read_data1), 
		.read_data2(read_data2)
	);

	initial begin
		// Initialize Inputs
		clock = 1;
		RegWrite = 1;
		read_reg1 = 4'd2;
		read_reg2 = 4'd5;
		write_reg = 0;
		write_data = $random;
		#10 write_reg = 4'd2;
		#50 write_reg = 4'd5;
		#50 write_data = $random;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
      
endmodule

