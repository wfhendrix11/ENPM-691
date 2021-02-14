# ENPM-691

Provided programs for ENPM 691 Hacking of C Programs and Unix Binaries at the University of Maryland.

## Programs used in Lecture

### Lecture 1
* No programs were referenced.

### Lecture 2
* is_little_endian.c
* sign_extension.c

### Lecture 3
*

## Linux Commands

### Compiling C Programs

  `gcc fileName.c -o file-name`

### Running C Programs

  `./file-name`

### GDB Commands

  `gcc fileName.c -o file-name -ggdb` (Compiles with gdb enabled)
  
  `gdb file-name`

| Command       | Function      |
| ------------- |:-------------:|
| `echo $?`     | Prints the return value |
| `b x`     | Breakpoint at line x |
| `disass`     | Disassemble into assembly code |
| `disass /r`     | Disassemble into machine code |
| `r`     | Run |
| `c`     | Continue|
| `exit` | Exit gdb |
| `xb` | Shows Hex |
| `xt` | Shows Binary |
| `x/4bt $2` | Shows binary |

### Helpful Commands

| Command       | Function      |
| ------------- |:-------------:|
| `echo $?`     | Prints the return value |
| `list`     | Lists the code |
| `cat`     | Shows the code |
| `man ASCII` | Displays ASCII table |
