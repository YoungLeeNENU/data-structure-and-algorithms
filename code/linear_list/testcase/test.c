#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 5

int main(int argc, char *argv[])
{
    char *pi;
    int i;

    pi = malloc (LENGTH * sizeof (char));
    
    if (NULL == pi)
    {
        printf ("Out of memory!\n");
        exit (1);
    }

    for (i = 0; i < LENGTH; i += 1)
        scanf ("%c", &pi[i]);
    
    printf ("%s\n", pi);
    
    free (pi);
    
    return 0;
}
