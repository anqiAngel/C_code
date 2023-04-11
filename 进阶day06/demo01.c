#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* code */
    // malloc(大小) 分配堆内存 成功返回空间首地址 失败返回NULL
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        /* code */
        perror("发生错误");
    }
    // malloc(大小) 不会初始化 空间中的值为随机值
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", *(p + i));
    }
    printf("\n");
    // calloc(空间个数,大小) 空间值初始化为0
    int *p1 = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", *(p1 + i));
    }
    printf("\n");
    // relloc()有两种情况
    // 1.原来的空间后面有充足的空间 直接重新分配 
    // 2.原来的空间后面没有充足的空间 在后面找空间分配 没有返回NULL 
    // 如果直接用原来的指针直接存储 会造成原来的指针p1 = NULL找不到原来的空间了 导致内存泄漏
    int *ptr = (int *)realloc(p1, 200000000000000 * sizeof(int));
    if (ptr != NULL)
    {
        /* code */
        p1 = ptr;
    }else
    {
        /* code */
        printf("空间不足\n");
        perror("错误是");
    }
    free(p);
    p = NULL;
    free(p1);
    p1 = NULL;
    free(ptr);
    ptr = NULL;
    return 0;
}
