#include <stdio.h>
#include <string.h>
#include <assert.h>

// 实现strstr()
char *my_strstr(const char *str1, const char *str2)
{
    assert(str1 && str2);
}

int main()
{
    /* code */
    char arr1[] = "abcdefgh";
    char arr2[] = "def";
    // 存在返回的是arr1第一次匹配到arr2的地址 不存在返回NULL
    printf("%s\n", strstr(arr1, arr2));
    return 0;
}
