`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:49:37 12/06/2021 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input wire [3:0] ALUCnt,
    input wire [31:0] input1,
    input wire [31:0] input2,
    input [4:0] shamt,
    output reg [31:0] result,
    output reg zero
    );
always @(*) begin
if(ALUCnt == 0) begin
	result = input1 + input2;
end
if(ALUCnt == 1) begin
	result = input1 - input2;
end
if(ALUCnt == 2) begin
	result = ~input1;
end
if(ALUCnt == 3) begin
	result = input1 << shamt;
end
if(ALUCnt == 4) begin
	result = input1 >> shamt;
end
if(ALUCnt == 5) begin
	result = input1 & input2;
end
if(ALUCnt == 6) begin
	result = input1 | input2;
end
if(ALUCnt == 7) begin
	result = (input1 < input2)? 1: 0;
end

zero = result? 0:1;
end

endmodule
