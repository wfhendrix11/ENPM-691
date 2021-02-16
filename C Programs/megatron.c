#define _GNU_SOURCE
#include <stdlib.h>
#include <dlfcn.h>

/* Pointer to the original puts call */
static int (*_puts)(const char *str) = NULL;

int puts(const char *str)
{
    if (_puts == NULL)    {
        _puts = (int (*)(const char *str))   dlsym(RTLD_NEXT, "puts");

        // Hijack the RET address and modify it to <main+xx>

        __asm__ __volatile__ (
              "movl 0x4(%ebp), %eax \n"
              "addl $29, %eax \n"
              "movl %eax, 0x4(%ebp)"
        );

        return 1;
    }
    __asm__ __volatile__ (  
          "addl $12, %%esp \n"
          "jmp *%0 \n"
                   :
                   : "g" (_puts)
                   : "%esp"
             );
            return -1;
}

/*
1. gcc -c megatron.c -o megatron.o -ldl
2. gcc -shared -o megatron.so megatron.o -ldl
3. gcc -o cerberus cerberus.c
4. export LD_PRELOAD=./megatron.so
5. ./cerberus
*/

