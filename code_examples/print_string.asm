.text
main:
	li $v0, 4
	la $a0, message1
	syscall
	
	li $v0, 8
	la $a0, input
	la $a1, inputSize
	syscall
	
	li $v0, 4
	la $a0, message2
	syscall
	
	li $v0, 4
	la $a0, input
	syscall
	
	# terminate program
	li $v0, 10
	syscall
	
.data
message1: .asciiz "please enter your name: "
message2: .asciiz "your name is "
input: .space 81
inputSize: .word 80