#include <stdio.h>
#include <string.h>
#include <assert.h>

// 实现strcat()
char *my_strcat(char *dest, const char *source)
{
    assert(dest && source);
    char *ret = dest;
    // 1.找到\0
    while (*dest)
    {
        /* code */
        dest++;
    }
    // 2.追加源字符串
    while (*dest++ = *source++)
    {
        /* code */
        ;
    }
    return ret;
}

int main()
{
    /* code */
    char arr[20] = "hello ";
    char arr1[] = "world";
    strcat(arr, arr1);
    printf("%s\n", arr);
    char arr2[20] = "hello ";
    char arr3[] = "world";
    my_strcat(arr2, arr3);
    printf("%s\n", arr2);
    return 0;
}
