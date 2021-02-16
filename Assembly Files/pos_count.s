#PURPOSE: This program counts the number of positive items in the list.
#
#

#VARIABLES: The registers have the following uses:
#
# %edi - Holds the index of the data item being examined
# %ebx - Count of the number of positive items
# %eax - Current data item
#
# The following memory locations are used:
#
# data_items - contains the item data. A 0 is used
#	       to terminate the data
#

.section .data

data_items:	#These are the data items
 .long -3, 67, 34, 222, 45, 75, 54, 34, 44, 33, -22, 11, -66, 0

 .section .text

 .globl _start

_start:
  movl $-1, %edi 			# move -1 into the index register
  movl $0, %ebx  			# zero positive items so far
  

start_loop:			# start loop

    incl %edi
    movl data_items(, %edi, 4),  %eax 
    cmpl $0, %eax		# check to see if we've hit the end
    je loop_exit
    
    cmpl $0, %eax
    jle start_loop		# jump to loop beginnning if the new one is less than zero
    incl %ebx
    jmp start_loop

loop_exit:
 # %ebx is the status code for the exit system call
 # and it already has the maximum number

	movl $1, %eax 		# 1 is the exit()
	int $0x80




