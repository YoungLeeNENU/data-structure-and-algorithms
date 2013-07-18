#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char * name;
    char * sex;
}testcase;

typedef struct
{
    testcase * chain;
}list;

testcase sample1 = {
    "Lee",
    "male"
};

testcase sample2 = {
    "Zhang",
    "female"
};

list sample = {
    { sample1, sample2 }
};

int main(int argc, char *argv[])
{
    printf ("%s\n", sample1.name);
    printf ("%s\n", sample1.sex);

    return 0;
}
