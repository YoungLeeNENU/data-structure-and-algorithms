#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 10
/* #define method1 */
#define method2

int main(int argc, char *argv[])
{
        /* char a[10]; */
        /* strcpy (a, "bomb"); */
        /* printf ("%s %d\n", a, strlen(a));     */

    int *pi;
    int *pi2, i;

    pi = malloc (25 * sizeof (int));
    
    if (NULL == pi)
    {
        printf ("Out of memory!\n");
        exit (1);
    }

    pi2 = pi;
    for (i= 0; i < 25; i += 1)
    {
#ifdef method1
        *pi2++ = 0;
#endif /* method1 */
        
#ifdef method2
        pi[i] = 0;        
#endif /* method2 */        
        
        printf ("%d\n", *pi2);
    }
    
    free (pi);
    
    return 0;
}
