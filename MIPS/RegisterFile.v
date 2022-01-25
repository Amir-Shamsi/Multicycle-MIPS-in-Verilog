`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:32 11/05/2021 
// Design Name: 
// Module Name:    RegisterFile 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RegisterFile(
    input clock,
    input RegWrite,
    input [4:0] read_reg1,
    input [4:0] read_reg2,
    input [4:0] write_reg,
    input  [31:0] write_data,
    output wire [31:0] read_data1,
    output wire [31:0] read_data2
    );

	integer index;
	reg [31:0] registers [31:0];
	initial begin 
		for (index=0;index<32;index=index+1)
			registers[index] = 0;
		registers[1] = 0;
		registers[2] = 3;
		registers[3] = 3;
		registers[4] = 2;
		registers[5] = 3;
		registers[6] = 4;
		
		
	end
	
	always @ (posedge clock) begin
		if(RegWrite) begin
			if(write_reg == 0) begin
				$monitor("This operation is forbidden!");
			end
			else begin
				registers[write_reg] = write_data;
			end
		end
	end
	
	assign read_data1 = registers[read_reg1];
	assign read_data2 = registers[read_reg2];
	
	
endmodule
