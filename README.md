# ENPM-691

Provided programs for ENPM 691 Hacking of C Programs and Unix Binaries at the University of Maryland.

## Programs Demo'd

### 2/4
* is_little_endian.c
* sign_extension.c

### 2/11
* sign_to_unsig.c
* sign_extension.c
* wraparound.c

## Programs used in Lecture

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
| `x/4bt $2` | Examine (Read as "x-examine, 4-four, t-bytes, b-in binary") |
| `x/1xw address`| Examine (Read as "x-examine, 1-one, w-word, x-in hex")

### Helpful Commands

| Command       | Function      |
| ------------- |:-------------:|
| `echo $?`     | Prints the return value |
| `list`     | Lists the code |
| `cat`     | Shows the code |
| `man ASCII` | Displays ASCII table |
