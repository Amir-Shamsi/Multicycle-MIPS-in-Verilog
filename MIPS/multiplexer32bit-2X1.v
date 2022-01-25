`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 		 Amir Shamsi
// 
// Create Date:    09:29:12 10/03/2021 
// Design Name: 
// Module Name:    multiplexer32bit2X1 
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
module multiplexer32bit2X1(
    input [31:0] input1,
    input [31:0] input2,
    input select,
    output wire [31:0] out
    );

assign out = select? input2 : input1;

endmodule
