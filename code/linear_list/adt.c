/**
 * Liner_list
 */
#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

#undef malloc
#undef free

/**
 * @Type: Init the Liner list
 * @Status: DONE
 */
void *
alloc(size_t size)
{
    void * new_mem;

    new_mem = malloc(size);
    if (NULL == new_mem)
    {
        printf ("out of memory!\n");
        exit (EXIT_FAILURE);
    }
    
    return new_mem;
}

/**
 * @Type: Free the space of the Liner list which had been allocated
 * @Status: DONE
 */
void
destroy(void * mem_alloced)
{
    free (mem_alloced);
}


/**
 * @Type: Laod the data into the Liner list
 * @Status: TODO
 */
void
load(void * mem_alloced)
{
#if 0    
    info wang = {
        "王小林", 790631, "男", 18, "计 91", "健康"
    };
    info chen = {
        "陈红", 790632, "女", 20, "计 91", "一般"
    };
    info liu = {
        "刘建平", 790633, "男", 21, "计 91", "健康"
    };
    info zhang = {
        "张立立", 790634, "男", 17, "计 91", "神经衰弱"
    };
    
    llist origin_data = {
        {
            wang,
            chen,
            liu,
            zhang
        },
        4
    };

    mem_alloced = &origin_data;
#endif
}

/* #define FUNCTION */

#ifdef FUNCTION

/**
 * @Type: Show array's elements
 * @Status: TODO
 */
void
clear_list(register container *llist)
{
    return 0;
}

/**
 * @Type: Show array's elements
 * @Status: TODO
 */
void
list_empty(register container *llist)
{
    return 0;
}

/**
 * @Type: Show array's elements
 * @Status: TODO
 */
void
list_length(register container *llist)
{
    return 0;
}

/**
 * @Type: Show array's elements
 * @Status: TODO
 */
void
get_element(register container *llist, location i, )
{
    return 0;
}

#endif /* FUNCTION */
