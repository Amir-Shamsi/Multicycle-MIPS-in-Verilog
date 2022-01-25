`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:18:39 11/29/2021 
// Design Name: 
// Module Name:    IF_ID_Register 
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
module IF_ID_Register(
    input clock,
    input [31:0] next_pc,
    input [31:0] instruction,
	 input hit,
    output reg [31:0] instruction_out,
    output reg [31:0] next_pc_out,
    output wire hit_out
    );
	 
initial begin
	instruction_out = 0;
	next_pc_out = 0;
end
always@ (negedge clock & hit) begin
	next_pc_out = next_pc;
	instruction_out = instruction;
end

assign hit_out = hit;

endmodule
