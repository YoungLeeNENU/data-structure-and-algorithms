/**
 * Liner_list
 */
#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

#undef malloc

/**
 * @Type: Show array's elements
 * @Status: TODO
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

/* #define FUNCTION */

#ifdef FUNCTION

/**
 * @Type: Show array's elements
 * @Status: TODO
 */
void
destroy_list(register container *llist)
{
    return 0;
}

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
