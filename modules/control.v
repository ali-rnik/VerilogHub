module control(input [5:0] op, output reg [2:0] ALUCtrl, output reg branch);
	always @(op) begin
		// branch equal
		case (op)
			6'd10: begin
				ALUCtrl <= 3'd0;
				branch <= 1'b1;
			end
			default: begin
				ALUCtrl <= 3'd0;
			end
		endcase
	end
endmodule
