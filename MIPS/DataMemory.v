`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:08 12/23/2021 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(
    input clock,
    input [31:0] address,
    input [31:0] writeData,
    input MemRead,
    input MemWrite,
    output reg [31:0] readData
    );

reg [7:0] memory [1023:0];
integer i;
initial begin
	for(i=0; i<1023; i=i+1) begin
		memory[i] = 0;
	end
	
	//$1=0 int
	memory[0]=8'b00100000;
	memory[1]=8'b00000010;
	memory[2]=8'b00000000;
	memory[3]=8'b00000000;
	
	//$2=0 nmi
	memory[5]=8'b00100000;
	memory[6]=8'b00000011;
	memory[7]=8'b00000000;
	memory[8]=8'b00000000;


	//addi $1,$1,34
	memory[20]=32'b00100000;
	memory[21]=32'b01000010;
	memory[22]=32'b00000000;
	memory[23]=32'b00000011;
	
	
	//jump memory[20]
	memory[25]=32'b00001000;
	memory[26]=32'b00000000;
	memory[27]=32'b00000000;
	memory[28]=32'b00010100;
end

always @(posedge clock) begin
	if (MemWrite) begin
		memory[address] = writeData[31:24];
		memory[address+1] = writeData[23:16];
		memory[address+2] = writeData[15:8];
		memory[address+3] = writeData[7:0];
	end
	if (MemRead) begin
		readData = {memory[address],memory[address+1],memory[address+2],memory[address+3]};
	end
end


endmodule
