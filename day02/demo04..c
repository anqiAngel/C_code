#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // 定义字符串
    char str1[] = "hello";
    char str2[] = {'h','e','l','l','o','\0'};
    // int len = strlen(str1);
    int len = strlen(str2);
    printf("%d\n",len);
    printf("=============================\n");
    for (int i = 0; i < strlen(str2); i++)
    {
        /* code */
        printf("%c\n",str2[i]);
    }
    
    return 0;
}
