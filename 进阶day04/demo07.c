#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /* code */
    // strtok(要切割的字符串,分割字符集合(字符串))函数 字符串切割函数
    char str1[] = "www.baidu.com";
    char *sep = ".";
    // 创建str1的副本
    char str2[] = "";
    strcpy(str2, str1);
    printf("%s\n", str2);
    // printf("%s\n", strtok(str2, sep));
    // printf("%s\n", strtok(NULL, sep));
    // printf("%s\n", strtok(NULL, sep));
    char* ret = NULL; 
    // 用for循环分割
    for (ret = strtok(str2, sep); ret != NULL; ret = strtok(NULL, sep))
    {
        /* code */
        printf("%s\n",ret);
    }
    
    return 0;
}
