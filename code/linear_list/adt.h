#ifndef _ADT_H_
#define _ADT_H_

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define FIRST_INIT 100

#define malloc "Can't use malloc!"
#define init_List(num, type) (type *)alloc((num) * sizeof(type))
extern void *alloc(size_t size);

/* void * init_List(); */

typedef struct
{
    char name[20];
    long id;
    char sex[10];
    int age;
    char class[20];
    char status[30];
}info;

typedef struct
{
    info sample;
}llist;

#endif /* _ADT_H_ */
