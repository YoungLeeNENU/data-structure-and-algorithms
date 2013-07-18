/**
 * Init a liner list
 */
#include <stdio.h>
#include <stdlib.h>
#include "adt.h"

int main(int argc, char *argv[])
{
    llist * sample;
    
    sample = init_List (FIRST_INIT, llist);

    destroy_list (sample);

    return 0;
}
