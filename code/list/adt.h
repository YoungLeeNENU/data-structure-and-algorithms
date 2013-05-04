#ifndef _ADT_H_
#define _ADT_H_

/* status */
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef struct 
{
    int data;
    struct node *next;
}node;

void locate_element(register node *list, int location);

#endif /* _ADT_H_ */
