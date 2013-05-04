/**
 * Selection sort
 * Struct sample contains the array to be sorted
 */
#include <stdio.h>
#include "adt.h"

int
main(int argc, char *argv[])
{
    show_array(&sample);

    if (OK == selection_sort(&sample))
        show_array(&sample);
    else
        printf ("ERROR!\n");

    return 0;
}
