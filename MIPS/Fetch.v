`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:34 10/29/2021 
// Design Name: 
// Module Name:    Fetch 
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
module Fetch(
    input clock,
    input [31:0] branch_target,
    input pc_source,
	 //input [31:0] jump_address,
    output wire [31:0] next_pc,
    output reg [31:0] instruction,
    output reg hit
    );
	reg [31:0] four = 4;
	reg [31:0] prev_address = 0;
	reg [31:0] pc_output_address = 0;
	reg [31:0] pc_output_address_1 = 0;
	reg [31:0] instruction_out = 0;
	reg [31:0] pc_added_by_4 = 0;
	wire [127:0] data_line;
	initial begin
		hit = 1;
		//next_pc = 0;
		//jump_address = 0;
		pc_output_address = 0;
		//instruction_out = 32'b00100000000000010000000000000001;
	end

reg [4:0] counter = 0;
reg [4:0] inner_counter = 0;
reg [4:0] inst = 0;
reg [4:0] done = 0;
reg status = 0;

always @(pc_source) begin
	if (pc_source && branch_target != 31'bx)
		pc_output_address = branch_target - 1;
end

always @(negedge clock) begin
	pc_output_address = pc_output_address + 1;
	
	if (counter == 5) begin
		if (inner_counter == 4) begin
			inner_counter = 0; 
			inst = inst + 1;
			done = done + 1;
			counter = 0;
		end
		else begin
			if (inst == 0 && done < 3) begin
					instruction =  (inner_counter == 0)? 32'b00100000000000010000000000000001 : // beq
										(inner_counter == 1)? 32'b00100100001000100000000000001000 : // bne
										(inner_counter == 2)? 32'b00101000010000110000000000000011 : // bgt
										 32'b00101100011001000000000000000100; // bge
			end
			else if (inst == 1 && done < 3) begin
					instruction =  (inner_counter == 0)? 32'b00110000100001010000000000000101 : // blt 
										(inner_counter == 1)? 32'b00110100101001100000000000000110 : // ble
										(inner_counter == 2)? 32'b00111000000000000000000000001000 : // jump
										 32'b01000100000000000000000000001001; // jump&link
			end
			else if (inst == 2 && done < 3) begin
					instruction =  (inner_counter == 0)? 32'b00111101000010000000000000001000 : //imul
										(inner_counter == 1)? 32'b01000001001010010000000000000010 : //divi
										(inner_counter == 2)? 32'b01001001010010100000000000000001 : //sra
										 0;
			end
			else if (inst > 2)
				instruction = 0;
			else 
			instruction = 0;
		end
		inner_counter = inner_counter + 1;
	end
	else
		counter = counter + 1;
end



/*	
	multiplexer32bit2X1 multiplexer_2x1_m(
		pc_output_address,
		branch_target,
		pc_source,
		pc_output_address_1
		);
		*/
	ProgramCounter32bits program_counter_m(
		pc_output_address_1,
		clock,
		inner_hit,
		pc_output_address
    );
	
	InstructionMemory instruction_memory_m(
		pc_output_address,
		clock,
		data_line
    );
	
	cache cache_m(
		clock,
		pc_output_address,
		data_line,
		inner_hit,
		instruction_out
    ); 
	 
assign next_pc = pc_output_address;

endmodule
