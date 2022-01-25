`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:04:49 12/06/2021 
// Design Name: 
// Module Name:    ALUControlUnit 
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
module ALUControlUnit(
    input [5:0] ALUOp,
    input [5:0] funct,
    output reg [4:0] ALUCnt
    );
	
always@(ALUOp or funct) begin
	if (ALUOp == 0) begin
		case(funct)
			6'b000000: begin // add
				ALUCnt = 4'b0000;
			end
			6'b000001: begin // sub 
				ALUCnt = 4'b0001;
			end
			6'b000010: begin // and
				ALUCnt = 4'b0101;
			end
			6'b000011: begin // or
				ALUCnt = 4'b0110;
			end
			6'b000100: begin // slt
				ALUCnt = 4'b0111;
			end
			6'b000101: begin // lsl
				ALUCnt = 4'b0011;
			end
			6'b000110: begin // lsr
				ALUCnt = 4'b0100;
			end
			6'b000111: begin // not
				ALUCnt = 4'b0010;
			end
			6'b001000: begin // sra
				ALUCnt = 17;
			end
		endcase
	end
	else if (ALUOp == 3'b001) // beq
		ALUCnt = 4'b0001;
	else if (ALUOp == 3'b010) // slti
		ALUCnt = 4'b0111;
	else if (ALUOp == 3'b011) // addi
		ALUCnt = 4'b0000;
	
	// -----------------------------
	else if(ALUOp == 4) begin // beq
		ALUCnt = 8;
	end
	else if(ALUOp == 5) begin // bne
		ALUCnt = 9;
	end
	else if(ALUOp == 6) begin // bgt
		ALUCnt = 10;
	end
	else if(ALUOp == 7) begin // bge
		ALUCnt = 11;
	end
	else if(ALUOp == 8) begin // blt
		ALUCnt = 12;
	end
	else if(ALUOp == 9) begin // ble
		ALUCnt = 13;
	end
	
	// -----------------------------
	else if(ALUOp == 10) begin // jump
		ALUCnt = 14;
	end
	// -----------------------------
	else if(ALUOp == 11) begin // imul
		ALUCnt = 15;
	end
	// -----------------------------
	else if(ALUOp == 12) begin // divi
		ALUCnt = 16;
	end
	// -----------------------------

end

endmodule
