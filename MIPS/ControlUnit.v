`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:39 11/28/2021 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [5:0] opcode,
    output reg RegDst,
    output reg ALUSrc,
    output reg MemtoReg,
    output reg RegWrite,
    output reg MemRead,
    output reg MemWrite,
    output reg Branch,
    output reg [5:0] ALUOp
    );
always@(opcode) begin
	case(opcode)
	6'b000000: begin
		  RegDst<=1;
		  ALUSrc<=0;
		  MemtoReg<=0;
		  RegWrite<=1;
		  MemRead<=0;
		  MemWrite<=0;
		  Branch<=0;
		  ALUOp <= 0;
	end
	6'b000001: begin
		  RegDst=0;
		  ALUSrc=1;
		  MemtoReg=0;
		  RegWrite=1;
		  MemRead=0;
		  MemWrite=0;
		  Branch=0;
		  ALUOp = 2;
	end
	6'b000100: begin
		  RegDst=0;
		  ALUSrc=1;
		  MemtoReg=1;
		  RegWrite=1;
		  MemRead=1;
		  MemWrite=0;
		  Branch=0;
		  ALUOp = 3;
	end
	6'b000101: begin
		  RegDst=0;
		  ALUSrc=1;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=1;
		  Branch=0;
		  ALUOp = 3;
	end
	6'b000110: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 1;
	end
	6'b000111: begin
		  RegDst=0;
		  ALUSrc=1;
		  MemtoReg=0;
		  RegWrite=1;
		  MemRead=0;
		  MemWrite=0;
		  Branch=0;
		  ALUOp = 2;
	end
	// --------- branches ---------
	6'b001000: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 8;
	end 
	6'b001001: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 9;
	end
	6'b001010: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 10;
	end
	6'b001011: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 11;
	end
	6'b001100: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 12;
	end
	6'b001101: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 13;
	end
	
	// --------- Jump ----------
	6'b001110: begin
		  RegDst=0;
		  ALUSrc=0;
		  MemtoReg=0;
		  RegWrite=0;
		  MemRead=0;
		  MemWrite=0;
		  Branch=1;
		  ALUOp = 14;
	end
	// --------- imul ----------
	6'b001111: begin
		  RegDst=1;
		  ALUSrc=1;
		  MemtoReg=0;
		  RegWrite=1;
		  MemRead=0;
		  MemWrite=0;
		  Branch=0;
		  ALUOp = 15;
	end
	// --------- divi ----------
	6'b010000: begin
		  RegDst=1;
		  ALUSrc=1;
		  MemtoReg=0;
		  RegWrite=1;
		  MemRead=0;
		  MemWrite=0;
		  Branch=0;
		  ALUOp = 15;
	end
	// -------------------------
	
	
	
	endcase
end
endmodule
