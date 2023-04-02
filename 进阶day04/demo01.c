#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char str[] = {'A', 'B', 'C'};
    printf("%d\n", strlen(str)); // 随机值
    // strlen()的返回值是unsigned long long类型 unsigned运算还是unsigned 表达式永远 > 0 -> 输出>
    if (strlen("abc") - strlen("abcdef") > 0)
    {
        /* code */
        printf(">\n");
    }
    else
    {
        /* code */
        printf("<=\n");
    }
    return 0;
}
