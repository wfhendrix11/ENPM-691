.data

HelloWorldString:
	.ascii  "Hello World\n"

.text

.globl _start

_start:
	# Load all the arguments for write ()

	movl $4, %eax 			# 4 is for write
	movl $1, %ebx 			# 1 is for STD OUT
	movl $HelloWorldString, %ecx    
	movl $12, %edx			# 12 is the length of the hello world string
	int $0x80 			# interrupt to call system functions

	# Need to exit the program
	movl $1, %eax			# 1 is for exit
	movl $0, %ebx			# 0 is for exit status
	int $0x80
