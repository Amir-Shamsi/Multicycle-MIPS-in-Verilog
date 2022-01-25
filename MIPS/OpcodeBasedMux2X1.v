`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:33:28 01/25/2022 
// Design Name: 
// Module Name:    OpcodeBasedMux2X1 
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
module OpcodeBasedMux2X1(
	 input RegWrite_from_controlUnit,
    input [5:0] opcode,
    input [31:0] next_pc,
    input [5:0] write_reg,
    input [5:0] write_data,
    output reg [5:0] write_reg_out,
    output reg [5:0] write_data_out
    );
always @(RegWrite_from_controlUnit) begin
if (RegWrite_from_controlUnit) begin
	if (opcode == 6'b010001) begin
		write_reg_out = 31;
		write_data_out = next_pc;
	end
	else begin
		write_reg_out = write_reg;
		write_data_out = write_data;
	end
end
end

endmodule
