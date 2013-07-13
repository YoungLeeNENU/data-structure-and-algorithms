/*
** 不易发生错误的内存分配器的实现
*/
#include <stdio.h>
#include "alloc.h"
#undef malloc

void *
alloc (size_t size)
{
    void *new_mem;

        /*
        ** 请求所需的内存，并检查确实分配成功
        */
    new_mem = malloc (size);
    
    if (NULL == new_mem)
    {
        printf ("Out of memory!\n");
        exit (1);
    }
    
    return new_mem;
}
