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
        "��С��", 790631, "��", 18, "�� 91", "����"
    };
    info chen = {
        "�º�", 790632, "Ů", 20, "�� 91", "һ��"
    };
    info liu = {
        "����ƽ", 790633, "��", 21, "�� 91", "����"
    };
    info zhang = {
        "������", 790634, "��", 17, "�� 91", "��˥��"
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
