#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // 定义字符串
    char str1[] = "hello";
    char str2[] = {'h','e','l','l','o','\0'};
    char str3[] = {'h','e','l','l','o'};
    // int len = strlen(str1);
    // int len = strlen(str2);
    int len = strlen(str3);
    printf("%d\n",len);
    // printf("%d\n",len);
    printf("=============================\n");
    for (int i = 0; i < strlen(str2); i++)
    {
        /* code */
        printf("%c\n",str2[i]);
    }
    
    return 0;
}
