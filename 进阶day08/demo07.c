#include <stdio.h>
#include <stdlib.h>
// 定义MALLOC()宏
#define MALLOC(NUM,TYPE) (int*)malloc(NUM*sizeof(TYPE))

int main()
{
    /* code */
    int* p = MALLOC(10, int);
    free(p);
    p = NULL;
    return 0;
}
