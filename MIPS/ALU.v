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
    input wire [4:0] ALUCnt,
    input wire [31:0] input1,
    input wire [31:0] input2,
    input [4:0] shamt,
    output reg [31:0] result,
    output reg zero
    );
initial begin
	result = 0;
	zero = 1;
end
	 
always @(*) begin
	if(ALUCnt == 0) begin
		result = input1 + input2;
		zero = result? 0:1;
	end
	else if(ALUCnt == 1) begin
		result = input1 - input2;
		zero = result? 0:1;
	end
	else if(ALUCnt == 2) begin
		result = ~input1;
		zero = result? 0:1;
	end
	else if(ALUCnt == 3) begin
		result = input1 << shamt;
		zero = result? 0:1;
	end
	else if(ALUCnt == 4) begin
		result = input1 >> shamt;
		zero = result? 0:1;
	end
	else if(ALUCnt == 5) begin
		result = input1 & input2;
		zero = result? 0:1;
	end
	else if(ALUCnt == 6) begin
		result = input1 | input2;
		zero = result? 0:1;
	end
	else if(ALUCnt == 7) begin
		result = (input1 < input2)? 1: 0;
		zero = result? 0:1;
	end

	//------------------------------------------------
	else if(ALUCnt == 8) begin // beq
		zero = (input1 == input2)? 1: 0;
	end
	else if(ALUCnt == 9) begin // bne
		zero = (input1 != input2)? 1: 0;
	end
	else if(ALUCnt == 10) begin // bgt
		zero = (input1 > input2)? 1: 0;
	end
	else if(ALUCnt == 11) begin // bge
		zero = (input1 >= input2)? 1: 0;
	end
	else if(ALUCnt == 12) begin // blt
		zero = (input1 < input2)? 1: 0;
	end
	else if(ALUCnt == 13) begin // ble
		zero = (input1 <= input2)? 1: 0;
	end
	//------------------------------------------------	
	else if(ALUCnt == 14) begin // jump
		//result = inpu1 + input2;
		zero = 1;
	end
	//------------------------------------------------
	else if(ALUCnt == 15) begin // imul
		result = input1 * input2;
		zero = result? 0:1;
	end
	//------------------------------------------------
	else if(ALUCnt == 16) begin // divi
		result = input1 / input2;
		zero = result? 0:1;
	end
	//------------------------------------------------
	else if(ALUCnt == 17) begin // sra
		result = input1 >>> input2;
		zero = result? 0:1;
	end
	//------------------------------------------------

end

endmodule
