`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 		 
// 
// Create Date:    09:24:04 10/28/2021 
// Design Name: 
// Module Name:    cache 
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
module cache(
	 input clock,
    input [31:0] address,
    input [127:0] data_line,
    output reg hit,
    output reg [31:0] instruction
    );
	reg [24:0] address_tag;
	reg [2:0] address_offset;
	reg [3:0] address_index;
	reg [31:0] prev_data_line;
	reg [31:0] prev_address;
	reg [153:0] line;
	reg [127:0] data;
	reg [153:0] storage [0:7];
	integer i, counter;
	initial begin
		for (i=0;i<=7;i=i+1)
			storage[i] <= 0;
		counter = 1;
	end
	
	always @(negedge clock) begin
		address_tag = address[31:7];
		address_index = address[6:4];
		address_offset = address[3:2];

		line = storage[address_index];
		//$monitor("status=0x%0b  ssss=0x%0b   dddd=0x%0b", address_offset, address_tag == line[152:128] , line[153:153]);

		if(address_tag == line[152:128] && line[153:153]) begin
			data = line[127:0];
			//data[(4'd32+(4'd32*(address_offset)))-4'd1:4'd32*(address_offset)]
			instruction = (address_offset == 4'b0000)? data[31:0]:
								(address_offset == 4'b0001)? data[63:32]:
								(address_offset == 4'b0010)? data[95:64]:
								(address_offset == 4'b0011)? data[127:96]:
								32'bx;
			hit = 1'b1;
		end
		else begin
			storage[address_index][153:153] = 0;
			
			if(counter == 5) begin
				storage[address_index] = {1'b1, address_tag, data_line}; 
				storage[address_index][153:153] = 1;
				counter = 0;
			end
			if(prev_address != address)
				counter = 1;
			else
				counter = counter + 1;
			prev_address = address;
			hit = 1'b0;
		end
	end
	
endmodule
