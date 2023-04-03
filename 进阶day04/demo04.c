#include <stdio.h>
#include <string.h>
#include <assert.h>

// 实现strcmp()
int my_strcmp(const char *str1, const char *str2)
{
    assert(str1 && str2);
    while (*str1 == *str2)
    {
        /* code */
        if (*str1 == '\0')
        {
            /* code */
            break;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main()
{
    /* code */
    char p[] = "abcdef";
    char q[] = "abqb";
    // 比较的是指针的大小
    if (p > q)
    {
        /* code */
        printf("p > q\n");
    }
    else
    {
        /* code */
        printf("p <= q\n");
    }
    // 比较的是首字符的地址
    if ("abc" > "abcdef")
    {
        /* code */
        printf("abc > abcdef\n");
    }
    else
    {
        /* code */
        printf("abc <= abcdef\n");
    }
    // 用strcmp()函数
    if (strcmp(p, q) < 0)
    {
        /* code */
        printf("str1 < str2\n");
    }
    else if (strcmp(p, q) > 0)
    {
        /* code */
        printf("str1 > str2\n");
    }
    else
    {
        /* code */
        printf("str1 = str2\n");
    }
    // 用my_strcmp()函数
    if (my_strcmp(p, q) < 0)
    {
        /* code */
        printf("str1 < str2\n");
    }
    else if (my_strcmp(p, q) > 0)
    {
        /* code */
        printf("str1 > str2\n");
    }
    else
    {
        /* code */
        printf("str1 = str2\n");
    }

    return 0;
}
