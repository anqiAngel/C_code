#include <stdio.h>
#include <string.h>
#include <assert.h>

// 实现strstr()
char *my_strstr1(const char *str1, const char *str2)
{
    assert(str1 && str2);
    if (*str2 == '\0')
    {
        /* code */
        return (char*)str1;
    }
    const char *s1 = str1;
    const char *s2 = str2;
    char *cp = str1;
    while (*cp)
    {
        /* code */
        s1 = cp;
        s2 = str2;
        while (*s1 && *s2 && (*s1 == *s2))
        {
            /* code */
            s1++;
            s2++;
        }
        if (*str2 == '\0')
        {
            /* code */
            return (char*)cp;
        }
        cp++;
    }
    return NULL;

}

// 实现strstr()
char *my_strstr2(const char *str1, const char *str2)
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
