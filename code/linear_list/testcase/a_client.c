/*
** 一个使用很少引起错误的内存分配器的程序
*/
#include "alloc.h"

void
function ()
{
    int *new_memory;

    new_memory = MALLOC (25, int);
}

int
main(int argc, char *argv[])
{
    function ();
    
    return 0;
}
