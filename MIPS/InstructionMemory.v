`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:       Amir Shamsi
// 
// Create Date:    17:28:36 10/04/2021 
// Design Name: 
// Module Name:    InstructionMemory 
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
module InstructionMemory(
    input [31:0] address,
    input clock,
    output reg [127:0] dataline
    );
	reg [7:0] memory[0:1023];
	integer i, counter;
	reg [31:0] last_address;
	
	initial begin
		counter <= 1;
		last_address <= address;
		for (i=0;i<=1023;i=i+1)
			memory[i] <= $random;
			
		//6'b001000, 5'b00000, 5'b00001, 16'0000000000000001
		memory[0] = 8'b00100000;
		memory[1] = 8'b00110000;
		memory[2] = 8'b10000000;
		memory[3] = 8'b00000100; // beq
		
		
		memory[4] = 8'b00100100;
		memory[5] = 8'b00100010;
		memory[6] = 8'b00000000;
		memory[7] = 8'b00001000; // bne
		
		
		memory[8] = 8'b00101000;
		memory[9] = 8'b01000011;
		memory[10] = 8'b00000000;
		memory[11] = 8'b00000011; // bgt
		
		
		memory[12] = 8'b00101100;
		memory[14] = 8'b01100100;
		memory[15] = 8'b00000000;
		memory[16] = 8'b00000100; // bge
		
		memory[17] = 8'b00110000;
		memory[18] = 8'b10000101;
		memory[19] = 8'b00000000;
		memory[20] = 8'b00000101; // blt
		
		memory[21] = 8'b00110100;
		memory[22] = 8'b10100110;
		memory[23] = 8'b00000000;
		memory[24] = 8'b00000110; // ble
		
		
		memory[25] = 8'b00111000;
		memory[26] = 8'b00000000;
		memory[27] = 8'b00000000;
		memory[28] = 8'b00001000; // jump


		memory[29] = 8'b01000100;
		memory[30] = 8'b00000000;
		memory[31] = 8'b00000000;
		memory[32] = 8'b00001001; // jump&link 
		
		
		memory[33] = 8'b00111101;
		memory[34] = 8'b00001000;
		memory[35] = 8'b00000000;
		memory[36] = 8'b00001000; //imul
		
		
		memory[37] = 8'b01000001;
		memory[38] = 8'b00101001;
		memory[39] = 8'b00000000;
		memory[40] = 8'b00000010; //divi
		
		
		memory[41] = 8'b01001001;
		memory[42] = 8'b01001010;
		memory[43] = 8'b00000000;
		memory[44] = 8'b00000001; //sra
	end	

	always @(negedge clock) begin
	
		if((counter%5 == 0)) begin
			dataline <= {
							 memory[{address[31:4],4'b0011}],
							 memory[{address[31:4],4'b0010}],
							 memory[{address[31:4],4'b0001}],
							 memory[{address[31:4],4'b0000}],
							 
							 memory[{address[31:4],4'b0111}],
							 memory[{address[31:4],4'b0110}],
							 memory[{address[31:4],4'b0101}],
							 memory[{address[31:4],4'b0100}],
							 
							 memory[{address[31:4],4'b1011}],
							 memory[{address[31:4],4'b1010}],
							 memory[{address[31:4],4'b1001}],
							 memory[{address[31:4],4'b1000}],
							 
							 memory[{address[31:4],4'b1111}],
							 memory[{address[31:4],4'b1110}],
							 memory[{address[31:4],4'b1100}],
							 memory[{address[31:4],4'b1100}]};
			counter<=1;
			last_address <= address;
		end
		if (last_address>>4 == address>>4) begin
			counter <= counter + 1;
		end
		else begin
			counter <= 1;
			last_address <= address;
		end
   end

endmodule