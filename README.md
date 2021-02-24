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
| `/t` | Shows Binary |
| `x/4bt $2` | Examine (Read as "x-examine, 4-four, t-bytes, b-in binary") |
| `x/1xw address`| Examine (Read as "x-examine, 1-one, w-word, x-in hex") |
| `info registers` | Displays the currently set registers |

### Helpful Commands

| Command       | Function      |
| ------------- |:-------------:|
| `echo $?`     | Prints the return value |
| `list`     | Lists the code |
| `cat`     | Shows the code |
| `man ASCII` | Displays ASCII table |

### limits.h 

| Const       | Size      | Definition |
| ------------- |:-------------:| ------------- |
| CHAR_BIT |	8	| Defines the number of bits in a byte. |
| SCHAR_MIN |	-128 |	Defines the minimum value for a signed char. |
| SCHAR_MAX	| +127	| Defines the maximum value for a signed char. |
| UCHAR_MAX  |	255 |	Defines the maximum value for an unsigned char. |
| CHAR_MIN |	-128	| Defines the minimum value for type char and its value will be equal to SCHAR_MIN if char represents negative values, otherwise zero. |
| CHAR_MAX |	+127	| Defines the value for type char and its value will be equal to SCHAR_MAX if char represents negative values, otherwise UCHAR_MAX. |
| MB_LEN_MAX |	16 |	Defines the maximum number of bytes in a multi-byte character. |
| SHRT_MIN |	-32768 |	Defines the minimum value for a short int. |
| SHRT_MAX	| +32767	| Defines the maximum value for a short int. |
| USHRT_MAX |	65535 |	Defines the maximum value for an unsigned short int. |
| INT_MIN |	-2147483648	| Defines the minimum value for an int. |
| INT_MAX	| +2147483647 |	Defines the maximum value for an int. |
| UINT_MAX	| 4294967295 |	Defines the maximum value for an unsigned int. |
| LONG_MIN	| -9223372036854775808 |	Defines the minimum value for a long int. |
| LONG_MAX |	+9223372036854775807 |	Defines the maximum value for a long int. |
| ULONG_MAX |	18446744073709551615 |	Defines the maximum value for an unsigned long int. |
