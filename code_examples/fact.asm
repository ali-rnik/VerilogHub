# int main()
# {
#	int n = factorial(3);
#	printf("%d", n);	
# }
# int factor(int n)
# {
#	if (n < 1)
#		return 1;
#	else
#		return n * factorial(n-1);
# }

	main:
addi $a0, $zero, 5
jal factorial

add $a0, $v0, $zero
addi $v0, $zero, 1
syscall

addi $v0, $zero, 10
syscall 

	factorial:
addi $sp, $sp, -8
sw $a0, 4($sp)
sw $ra, 0($sp)

slti $t1, $a0, 1
beq $t1, $zero, else

addi $v0, $zero, 1
addi $sp, $sp, 8
jr $ra

else:
addi $a0, $a0, -1
jal factorial
lw $ra, 0($sp)
lw $a0, 4($sp)
addi $sp, $sp, 8
mul $v0, $v0, $a0
jr $ra


