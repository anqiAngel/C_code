#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    /* code */
    // char c1 = '1';
    char c1 = 'b';
    // isdigit(字符) 是数字字符返回非0值 不是返回0
    // int ret = isdigit(c1);
    // islower(字符) 是小写字母字符返回非0值 不是返回0
    int ret = islower(c1);
    // 或者
    if (c1 >= 'a' && c1 <= 'z')
    {
        /* code */
        printf("是小写字母\n");
    }
    printf("%d\n", ret);
    char str1[] = "abcdef";
    // 将str1转化为大写字符串
    for (int i = 0; i < strlen(str1); i++)
    {
        /* code */
        *(str1 + i) = toupper(*(str1 + i));
    }
    printf("%s\n", str1);
    return 0;
}
