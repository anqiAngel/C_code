#include <stdio.h>
#include <string.h>
#include <assert.h>

// 标准的C语言库函数实现
char * my_strcpy(char * dest,const char * src){
    assert(src != NULL);
    assert(dest != NULL);
    char * ret = dest; 
    while (*dest++ = *src++)
    {
        /* code */
        ;
    }
    return ret;
}
// 健壮性=鲁棒性
int my_strlen(const char * str){
    assert(str != NULL);
    int len = 0; 
    while (*str++)
    {
        /* code */
        len++;
    }
    return len;
}

int main()
{
    /* code */
    char str1 [] = "xxxxxxxxxxx";
    char  str2 [] = "hello";
    // printf("%s\n",str1);
    my_strcpy(str1,str2);
    // strcpy(str1,str2);
    // strcpy函数返回的是目标空间的起始地址
    // C语言错误有:语法错误、链接错误、运行时错误
    printf("%s\n",str1);
    printf("%d\n",my_strlen(str1));
    return 0;
}
