`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:27:58 11/29/2021 
// Design Name: 
// Module Name:    MIPS 
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
module MIPS();
		//input clock
    //);
	 reg clock =0;
	always #10 clock = ~clock;
	reg do_not_care = 0;
	wire [31:0] jump_signal=$random; 
	wire [31:0] jump_signal_out=jump_signal; 

	
	//------------------------------------------------
	//                    FETCH
	//------------------------------------------------
		wire [31:0] next_pc_from_fetch;
		wire [31:0] instruction_from_fetch;
		wire hit_from_fetch;
	//assign next_pc_from_fetch = $random;
	//------------------------------------------------
	//                IF_ID (PIPELINE)
	//------------------------------------------------
		wire [31:0] next_pc_from_IFID;
		wire [31:0] instruction_from_IFID;
		wire hit_from_IFID;
	//------------------------------------------------
	//                    DECODE
	//------------------------------------------------
		wire [5:0] opcode_form_decode;
		wire [31:0] read_data1_form_decode;
		wire [31:0] read_data2_form_decode;
		wire [31:0] sign_extended_immediate_form_decode;
		wire [4:0] rt_form_decode;
		wire [4:0] rd_form_decode;
	//------------------------------------------------
	//                 CONTROL_UNIT
	//------------------------------------------------
		wire RegDst_from_controlUnit;
		wire ALUSrc_from_controlUnit;
		wire MemtoReg_from_controlUnit;
		wire RegWrite_from_controlUnit;
		wire MemRead_from_controlUnit;
		wire MemWrite_from_controlUnit;
		wire Branch_from_controlUnit;
		wire [5:0] ALUOp_from_controlUnit;
		//wire jumpSignal_from_controlUnit;
	//------------------------------------------------
	//                ID_EX (PIPELINE)
	//------------------------------------------------
		wire [31:0] readData1Out_from_IDEX;
		wire [31:0] readData2Out_from_IDEX;
		wire [31:0] signExImmediateOut_from_IDEX;
		wire RegDstOut_from_IDEX;
		wire ALUSrcOut_from_IDEX;
		wire MemtoRegOut_from_IDEX;
		wire RegWriteOut_from_IDEX;
		wire MemReadOut_from_IDEX;
		wire MemWriteOut_from_IDEX;
		wire BranchOut_from_IDEX;
		wire [5:0] ALUOpOut_from_IDEX;
		wire [4:0] rtOut_from_IDEX;
		wire [4:0] rdOut_from_IDEX;
		wire [5:0] functOut_from_IDEX;
		wire [31:0] nextPCOut_from_IDEX;
		wire hitOut_from_IDEX;
		//wire jumpSignalOut_from_IDEX;
	//------------------------------------------------
	//                   EXECUTE
	//------------------------------------------------
		wire [31:0] ALUResult_from_Execute;
		wire zero_from_Execute;
	//------------------------------------------------
	//						  ALU_MIPS	
	//------------------------------------------------
		wire [31:0] branchTarget_from_alu_mips_m;
	//------------------------------------------------
	//              MULTIPLEXER_MIPS
	//------------------------------------------------
		wire [4:0] writeRegOut_from_mips_multiplexer;
	//------------------------------------------------
	//               EX_MEM_REGISTER
	//------------------------------------------------
		wire [31:0] branchTargetOut_from_EM_MEM;
		wire zeroFlagOut_from_EM_MEM;
		wire [31:0] ALUResultOut_from_EM_MEM;
		wire [31:0] readData2Out_from_EM_MEM;
		wire [4:0] writeRegOut_from_EM_MEM;
		wire MemReadOut_from_EM_MEM;
		wire MemWriteOut_from_EM_MEM;
		wire BranchOut_from_EM_MEM;
		wire RegWriteOut_from_EM_MEM;
		wire MemToRegOut_from_EM_MEM;
		wire hitOut_from_EM_MEM;
		//wire jumpSignalOut_from_EM_MEM;
	//------------------------------------------------
	//						 DATA MEMORY
	//------------------------------------------------
		wire [31:0] readData_from_DataMemory;
	//------------------------------------------------
	//           AND ( EX/MEM -> MEM/WB)
	//------------------------------------------------
		wire pc_source_from_AND;
	//------------------------------------------------
	//				     MEM_WB_REGISTER
	//------------------------------------------------
		wire hitOut_from_MEM_WB;
		wire [31:0] readDataOut_from_MEM_WB;
		wire [31:0] ALUResultOut_from_MEM_WB;
		wire [4:0] writeRegOut_from_MEM_WB;
		wire RegWriteOut_from_MEM_WB;
		wire MemtoRegOut_from_MEM_WB;
	//------------------------------------------------
	//           MULTIPLEXER_AFTER_MEM_WB
	//------------------------------------------------
		wire [31:0] writeDataOut_from_wirte_back;
	//------------------------------------------------
	
		wire [5:0] write_reg_MIPS;
		wire [5:0] write_data_MIPS;
	
		
	OpcodeBasedMux2X1 OpcodeBasedMux2X1_m(
		 RegWrite_from_controlUnit,
		 opcode_form_decode,
		 next_pc_from_fetch,
		 writeRegOut_from_MEM_WB,
		 writeDataOut_from_wirte_back,
		 write_reg_MIPS,
		 write_data_MIPS
		 );
		
	Fetch fetch_m(
		clock,
		branchTargetOut_from_EM_MEM,
		pc_source_from_AND,
		//ALUResultOut_from_EM_MEM,
		next_pc_from_fetch,
		instruction_from_fetch,
		hit_from_fetch
		);
		
	IF_ID_Register IDIFRegister_m(
		clock,
		next_pc_from_fetch,
		instruction_from_fetch,
		hit_from_fetch,
		instruction_from_IFID,
		next_pc_from_IFID,
		hit_from_IFID
		);
		
		
	Decode decode_m(
      clock,
      instruction_from_IFID,
		RegWrite_from_controlUnit,
		write_reg_MIPS,//
		wirte_data_MIPS,//
		opcode_form_decode,
		read_data1_form_decode,
		read_data2_form_decode,
		sign_extended_immediate_form_decode,
		rt_form_decode,
		rd_form_decode
    );
	 
	
	 
	ControlUnit control_unit_m(
		opcode_form_decode,
		RegDst_from_controlUnit,
		ALUSrc_from_controlUnit,
		MemtoReg_from_controlUnit,
		RegWrite_from_controlUnit,
		MemRead_from_controlUnit,
		MemWrite_from_controlUnit,
		Branch_from_controlUnit,
		ALUOp_from_controlUnit
		//jumpSignal_from_controlUnit
		);
/*		
	register31 reg_31_m(
		clock,
		next_pc_from_IFID,
		opcode_form_decode,
		register_31_pc
		);
	*/	
	ID_EX_Register ID_EX_Register_m(
		 clock,
		 hit_from_IFID,
		 read_data1_form_decode,
		 read_data2_form_decode,
		 sign_extended_immediate_form_decode,
		 RegDst_from_controlUnit,
		 ALUSrc_from_controlUnit,
		 MemtoReg_from_controlUnit,
		 RegWrite_from_controlUnit,
		 MemRead_from_controlUnit,
		 MemWrite_from_controlUnit,
		 Branch_from_controlUnit,
		 {1'b0, ALUOp_from_controlUnit},
		 rt_form_decode,
		 rd_form_decode,
		 sign_extended_immediate_form_decode[5:0], //funct
		 next_pc_from_fetch,
		 jump_signal,
		 readData1Out_from_IDEX,
		 readData2Out_from_IDEX,
		 signExImmediateOut_from_IDEX,
		 RegDstOut_from_IDEX,
		 ALUSrcOut_from_IDEX,
		 MemtoRegOut_from_IDEX,
		 RegWriteOut_from_IDEX,
		 MemReadOut_from_IDEX,
		 MemWriteOut_from_IDEX,
		 BranchOut_from_IDEX,
		 ALUOpOut_from_IDEX,
		 rtOut_from_IDEX,
		 rdOut_from_IDEX,
		 functOut_from_IDEX,
		 nextPCOut_from_IDEX,
		 hitOut_from_IDEX,
		 jump_signal_out
		);
		
		
// ----------------------------------------------------------	 
// ----------------------------------------------------------	 
	Execute execute_m(
		 clock,
		 readData1Out_from_IDEX,
		 readData2Out_from_IDEX,
		 signExImmediateOut_from_IDEX,
		 functOut_from_IDEX,
		 ALUOpOut_from_IDEX,
		 ALUSrcOut_from_IDEX,
		 ALUResult_from_Execute,
		 zero_from_Execute
    );
	 
	ALU alu_mips_m(
	 0,
    nextPCOut_from_IDEX,
    signExImmediateOut_from_IDEX<<1,
    0,
    branchTarget_from_alu_mips_m,
	 do_not_care
	);
	 
	multiplexer32bit2X1 multiplexer32bit2X1_mips_m(
		rtOut_from_IDEX,
		rdOut_from_IDEX,
		RegDstOut_from_IDEX,
		writeRegOut_from_mips_multiplexer
	);
// -------------------------------------------------------  
// -------------------------------------------------------  
	 EM_MEM_Register em_mem_register_m (
		clock,
		hitOut_from_IDEX,
		branchTarget_from_alu_mips_m,
		zero_from_Execute,
		ALUResult_from_Execute,
		readData2Out_from_IDEX,
		writeRegOut_from_mips_multiplexer,
		MemReadOut_from_IDEX,
		MemWriteOut_from_IDEX,
		BranchOut_from_IDEX,
		RegWriteOut_from_IDEX,
		MemtoRegOut_from_IDEX,
		jump_signal,
		branchTargetOut_from_EM_MEM,
		zeroFlagOut_from_EM_MEM,
		ALUResultOut_from_EM_MEM,
		readData2Out_from_EM_MEM,
		writeRegOut_from_EM_MEM,
		MemReadOut_from_EM_MEM,
		MemWriteOut_from_EM_MEM,
		BranchOut_from_EM_MEM,
		RegWriteOut_from_EM_MEM,
		MemToRegOut_from_EM_MEM,
		hitOut_from_EM_MEM,
		jump_signal_out
	 );
// -------------------------------------------------------  
// -------------------------------------------------------  

	DataMemory data_memory_m(
		clock, 
		ALUResultOut_from_EM_MEM, 
		readData2Out_from_EM_MEM, 
		MemReadOut_from_EM_MEM, 
		MemWriteOut_from_EM_MEM, 
		readData_from_DataMemory
	);
	
	assign pc_source_from_AND = BranchOut_from_IDEX & zeroFlagOut_from_EM_MEM;
	
// -------------------------------------------------------  
// ------------------------------------------------------- 

	MEM_WB_Register MEM_WB_Register_m(
		clock,
		hitOut_from_IDEX,
		readData_from_DataMemory,
		ALUResultOut_from_EM_MEM,
		writeRegOut_from_EM_MEM,
		RegWriteOut_from_EM_MEM,
		MemToRegOut_from_EM_MEM,
		hitOut_from_MEM_WB,
		readDataOut_from_MEM_WB,
		ALUResultOut_from_MEM_WB,
		writeRegOut_from_MEM_WB,
		RegWriteOut_from_MEM_WB,
		MemtoRegOut_from_MEM_WB
	); 
	
// -------------------------------------------------------  
// ------------------------------------------------------- 

	WriteBack write_back_m(
		ALUResultOut_from_MEM_WB,
		readDataOut_from_MEM_WB,
		MemtoRegOut_from_MEM_WB,
		writeDataOut_from_wirte_back
	);

endmodule
