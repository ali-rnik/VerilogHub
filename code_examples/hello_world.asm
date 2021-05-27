.text
main:
	# print message to read a number
	li $v0, 4
	la $a0, message1
	syscall
	
	# read number from input and save it in $a1
	li $v0, 5
	syscall
	add $a1, $v0, $zero
	
	# print a message that says what was entered.
	li $v0, 4
	la $a0, message2
	syscall
	
	# print number
	li $v0, 1
	add $a0, $a1, $zero
	syscall
	
	# terminate program
	li $v0, 10
	syscall
	
.data
message1: .asciiz "Hi please insert a number: "
message2: .asciiz "the number you entered is: "