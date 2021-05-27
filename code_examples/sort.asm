# void swap(int *v, int i, int j)
# {
# 	int temp = v[i];
# 	v[i] = v[j];
# 	v[j] = temp;
# }

# void sort(int *v, int sz)
# {
# 	for (int i = 0; i < sz - 1; i++) {
# 		for (int j = i + 1; j < sz; j++) {
# 			if (v[i] > v[j])
# 				swap(v, i, j);
# 		}
# 	}
# }
#
# void main()
# {
# 	int a[] = {1, 7, 3, 5 , 4};
# 	sort(&a, 5);
# 	for (int i = 0; i < 5; i++)
# 		printf("%d ", a[i]);
# }

	main:
la  $a0, list

addi $a1, $zero, 24

jal sort

la $s1, list
addi $a1, $a1, -4
addi $t0, $zero, 0 # i = 0
for:
slt $t1, $t0, $a1 
beq $t1, $zero, exit
add  $t2, $s1, $t0 
lw $a0, ($t2)
addi $v0, $zero, 1
syscall
addi $t0, $t0, 4
j for

exit:
addi $v0, $zero, 10
syscall

	sort:
addi $t0, $zero, 0 # i = 0
add $t1, $zero, $a1 # sz
addi $t1, $t1, -4 # sz - 4
for1:
slt $t2, $t0, $t1 # compare i < sz
beq $t2, $zero, exitfor1 # i < sz then end for1

addi $t3, $t0, 4 # j = i + 4
for2:
slt $t2 ,$t3, $t1 # compare j < sz
beq $t2 $zero, exitfor2 # j < sz then end for2

add $t4, $a0, $t0 # $t4 = address of v[i]
lw $t4, 0($t4) # $t4 = v[i]
add $t5, $a0, $t3 # $t5 = address of v[j]
lw $t5, 0($t5) # t5 = v[j]

slt $t2, $t4, $t5 # compare v[i] < v[j]
bne $t2, $zero, exitfor2 # if v[i] < v[j] then end for2

addi $sp, $sp, -8
sw $a1, 0($sp)
sw $ra, 4($sp)

add $a1, $zero, $t0
add $a2, $zero, $t3
jal swap

lw $a1, 0($sp)
lw $ra, 4($sp)

addi $sp, $sp, 8

addi $t3, $t3, 4 # j += 4
j for2
exitfor2:

addi $t0, $t0, 4 # i += 4
j for1
exitfor1:
jr $ra


	swap:
addi $sp, $sp, -20
sw $ra, 16($sp)
sw $t0, 12($sp)
sw $t1, 8($sp)
sw $t2, 4($sp)
sw $t3, 0($sp)


add $t0, $a0, $a1 # $t0 = address of v[i]
lw $t1, 0($t0) # $t1 = v[i]

add $t2, $a0, $a2 # $t2 = address of v[j]
lw $t3, 0($t2) # $t3 = v[j]

sw $t3, 0($t0) # v[i] = $t3
sw $t1, 0($t2) # v[j] = $t1

lw $ra, 16($sp)
lw $t0, 12($sp)
lw $t1, 8($sp)
lw $t2, 4($sp)
lw $t3, 0($sp)

addi $sp, $sp, 20
jr $ra

.data
list: .word 5 4 3 2 
