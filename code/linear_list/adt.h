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
#define free   "Can't use free!"

#define init_List(num, type) (type *)alloc((num) * sizeof(type))
#define destroy_list(alloced) (void)destroy(alloced)
#define load_list(alloced) (void)load(alloced)

extern void * alloc(size_t size);
extern void destroy(void * mem_alloced);
extern void load(void * alloced);

typedef struct
{
#if 0
    char name[20];
    long id;
    char sex[10];
    int  age;
    char class[20];
    char status[30];
#endif
    
    char * name;
    long id;
    char * sex;
    int  age;
    char * class;
    char * status;
}info;

typedef struct
{
    info * data;
}llist;

#endif /* _ADT_H_ */
