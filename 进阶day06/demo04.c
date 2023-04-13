#include <stdio.h>
#include <stdlib.h>
// 1.
struct S1
{
    /* data */
    int n;
    // 柔性数组成员 大小未知
    int arr[];
};

// 2.
struct S2
{
    /* data */
    int n;
    // 柔性数组成员 大小未知
    int arr[0];
};

int main()
{
    /* code */
    // 动态分配内存空间
    struct S1 *ps = (struct S1 *)malloc(sizeof(struct S1) + 10 * sizeof(int));
    // struct S1 s = {0};
    // printf("%d\n",sizeof(s)); // 4
    struct S1 *p = (struct S1 *)realloc(ps, sizeof(struct S1) + 20 * sizeof(int));
    if (p != NULL)
    {
        /* code */
        ps = p;
    }
    ps->n = 10;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        ps->arr[i] = i;
    }
    for (int j = 0; j < 10; j++)
    {
        /* code */
        printf("%d ", ps->arr[j]);
    }
    printf("\n");
    free(ps);
    ps = NULL;
    p = NULL;
    return 0;
}
