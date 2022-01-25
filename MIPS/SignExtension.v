`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:39:56 11/05/2021 
// Design Name: 
// Module Name:    SignExtension 
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
module SignExtension(
    input clock,
    input [15:0] value,
    output reg [31:0] sign_extended_value
    );
	 
	 
	always @ (negedge clock) 
	begin
		sign_extended_value = {{16{value[15]}}, value[15:0]};
	end

endmodule
