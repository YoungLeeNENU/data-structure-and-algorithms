/**
 * Sorts
 */
#include <stdio.h>
#include "adt.h"

/**
 * @Type: Show array's elements
 * @Status: DONE
 */
void
show_array(register container *array)
{
    for (int i = 0; i < array -> size; ++i)
        printf ("%d ", array -> sample[i]);
    printf ("\n");
}

/**
 * @Type: Check if we have the correct result
 * @Status: DONE
 */
int
check_array(register container *array)
{
    for (int i = array -> size; i > 0; --i)
        if (array -> sample[i] < array -> sample[i - 1])
            return ERROR;

    return OK;
}

/**
 * @Type: Simple insertion sort
 * @Status: DONE
 */
int
insertion_sort(register container *unsorted)
{
    int sentinel;

    for (int j = 1; j < unsorted -> size; ++j)
    {
            /* 把要插入的元素赋给 sentinel */
        sentinel = unsorted -> sample[j];
            /* 从要插入元素的前一个位置开始，要插入元素之前已经排序 */
        int k = j - 1;
            /* 从后向前遍历之前的元素，如果比要插入的元素的值大，就后移 */
        while ((k >= 0) && (unsorted -> sample[k] > sentinel))
        {
            unsorted -> sample[k + 1] = unsorted -> sample[k];
            k -= 1;
        }
            /* 后移操作结束，会留下一个位置，给要插入的元素 */
        unsorted -> sample[k + 1] = sentinel;
    }

    return check_array(unsorted);
}

/**
 * @Type: Binary insertion sort
 * @Status: TODO
 */
int
binary_insertion_sort(register container *unsorted)
{
    int sentinel;
    int left, mid, right;

    for (int j = 1; j < unsorted -> size; ++j)
    {
        sentinel = unsorted -> sample[j];
        right = j - 1;
        left = 0;

            /* 用二分法找要插入的位置 */
        while (right >= left)
        {
            mid = (right + left) / 2;

            printf ("KEY: %d\n", sentinel);
            printf ("%d--%d--%d\n", unsorted -> sample[left], \
                    unsorted -> sample[mid], \
                    unsorted -> sample[right]);
            if (sentinel < unsorted -> sample[mid])
            {
                right = mid - 1;
            }
            else if (sentinel == unsorted -> sample[mid])
            {
                break;
            }
            else if (sentinel > unsorted -> sample[mid])
            {
                left = mid + 1;
            }
                /* mid = (right + left) / 2; */
        }

        printf ("replace the element: %d[%d]\n", unsorted -> sample[mid], mid);

            /* 后移元素，完成插入 */
        for (int p = j - 1; p >= mid; --p)
            unsorted -> sample[p + 1] = unsorted -> sample[p];
        unsorted -> sample[mid] = sentinel;

#if 0
        int k = j - 1;
        while ((k >= 0) && (unsorted -> sample[mid] > sentinel))
        {
            unsorted -> sample[k + 1] = unsorted -> sample[k];
            k -= 1;
        }
        unsorted -> sample[mid] = sentinel;
#endif

            /* 显示 */
        for (int i = 0; i < unsorted -> size; ++i)
            printf ("%d ", unsorted -> sample[i]);
        printf ("\n");
    }

    return check_array(unsorted);
}

/**
 * @Type: Shell sort
 * @Status: TODO
 */
int
shell_sort(register container *unsorted)
{
    return check_array(unsorted);
}

/**
 * @Type: Bubble sort
 * @Status: DONE
 */
int
bubble_sort(register container *unsorted)
{
    int flag = 1;

    for (int i = 0; (i < unsorted -> size) && flag; ++i)
    {
        flag = 0;

        for (int j = (unsorted -> size) - 1; j > i; --j)
        {
            if (unsorted -> sample[j - 1] > unsorted -> sample[j])
            {
                flag = 1;
                /* Swap two elements */
                int tmp = unsorted -> sample[j];
                unsorted -> sample[j] = unsorted -> sample[j - 1];
                unsorted -> sample[j - 1] = tmp;
            }
        }
    }

    return check_array(unsorted);
}

/**
 * @Type: Quick sort
 * @Status: TODO
 */
int
quick_sort(register container *unsorted)
{
    return check_array(unsorted);
}

/**
 * @Type: Simple selection sort
 * @Status: DONE
 */
int
selection_sort(register container *unsorted)
{
    for (int i = 0; i < unsorted -> size; ++i)
    {
        int min = unsorted -> sample[i];
        int key = 0;

        for (int j = i; j < unsorted -> size; ++j)
        {
            if (unsorted -> sample[j] <= min)
            {
                min = unsorted -> sample[j];
                key = j;
            }
        }

        if (key != i)
        {
            int tmp = unsorted -> sample[key];
            unsorted -> sample[key] = unsorted -> sample[i];
            unsorted -> sample[i] = tmp;
        }
    }

    return check_array(unsorted);
}

/**
 * @Type: Tree selection sort
 * @Status: TODO
 */
int
tree_selection_sort(register container *unsorted)
{
    return check_array(unsorted);
}

/**
 * @Type: Heap sort
 * @Status: TODO
 */
int
heap_sort(register container *unsorted)
{
    return check_array(unsorted);
}

/**
 * @Type: Two way merge sort
 * @Status: TODO
 */
int
merge_sort(register container *unsorted)
{
    return check_array(unsorted);
}

/**
 * @Type: Radix sort
 * @Status: TODO
 */
int
radix_sort(register container *unsorted)
{
    return check_array(unsorted);
}
