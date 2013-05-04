#ifndef _ADT_H_
#define _ADT_H_

/* status */
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

/* array length */
#define LENGTH 10

/* unsorted array */
typedef struct
{
    int sample[LENGTH];
    int size;
}container;

static container sample = {
    {9, 3, 2, 6, 1, 8, 4, 7, 0, 5},
    10
};

/* show elements in the array */
void show_array(register container *array);
int check_array(register container *array);

/* sort type */
int insertion_sort(register container *unsorted);
int binary_insertion_sort(register container *unsorted);
int shell_sort(register container *unsorted);
int bubble_sort(register container *unsorted);
int quick_sort(register container *unsorted);
int selection_sort(register container *unsorted);
int tree_selection_sort(register container *unsorted);
int heap_sort(register container *unsorted);
int merge_sort(register container *unsorted);
int radix_sort(register container *unsorted);

#endif /* _ADT_H_ */
