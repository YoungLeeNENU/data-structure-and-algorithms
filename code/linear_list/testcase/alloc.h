/*
** 定义一个不易发生错误的内存分配器
*/
#ifndef _ALLOC_H_
#define _ALLOC_H_

#include <stdlib.h>

#define malloc "不要直接调用malloc!"
#define MALLOC(num, type) (type *)alloc((num) * sizeof(type))
extern void *alloc(size_t size);

#endif /* _ALLOC_H_ */
