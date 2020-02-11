module control(input [5:0] op, output reg [2:0] ALUCtrl, output reg branch, 
	writeEn, branchSwap, immediate);
	always @(op) begin
		// branch equal
		case (op)
			6'd10: begin
				ALUCtrl = 3'd0;
				branch = 1'b1;
				writeEn = 1'b0;
				branchSwap = 1'b1;
				immediate = 1'b1;
			end
			6'd11: begin
				ALUCtrl = 3'd0;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b1;
			end
			6'd0: begin
				ALUCtrl = 3'd0;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
			6'd1: begin
				ALUCtrl = 3'd1;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
			6'd2: begin
				ALUCtrl = 3'd2;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
			6'd3: begin
				ALUCtrl = 3'd3;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
			6'd4: begin
				ALUCtrl = 3'd4;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
			6'd5: begin
				ALUCtrl = 3'd5;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
			default: begin
				ALUCtrl = 3'd0;
				branch = 1'b0;
				writeEn = 1'b1;
				branchSwap = 1'b0;
				immediate = 1'b0;
			end
		endcase
	end
endmodule
