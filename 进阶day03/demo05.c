#include <stdio.h>
#include <string.h>

// 判断str2是不是由str1左旋得到的
// 暴力
int is_string_rotate1(char *str1, char *str2)
{
    if (strlen(str1) < strlen(str2) || strlen(str1) > strlen(str2))
    {
        /* code */
        return 0;
    }
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        /* code */
        char tmp = *str1;
        for (int j = 0; j < len - 1; j++)
        {
            /* code */
            *(str1 + j) = *(str1 + j + 1);
        }
        *(str1 + len - 1) = tmp;
        if (strcmp(str1, str2) == 0)
        {
            /* code */
            return 1;
        }
    }
    return 0;

}

// 判断str2是不是由str1左旋得到的
// 子串 str2是str1str1的子串就一定是str1左旋得到的
int is_string_rotate2(char *str1, char *str2)
{
    // 在str1后追加1个str1
    strncat(str1,str1,strlen(str1));
    // 判断str2是不是str1str1的子串
    if (strstr(str1,str2))
    {
        /* code */
        return 1;
    }
    return 0;
    
}

int main()
{
    /* code */
    char str1[] = "ABCDE";
    char str2[] = "ABCDE";
    int res = is_string_rotate1(str1,str2);
    if (res)
    {
        /* code */
        printf("是str1左旋得到的\n");
    }else
    {
        /* code */
        printf("不是str1左旋得到的\n");
    }
    int res1 = is_string_rotate2(str1,str2);
    if (res1)
    {
        /* code */
        printf("是str1左旋得到的\n");
    }else
    {
        /* code */
        printf("不是str1左旋得到的\n");
    }
    return 0;
}
