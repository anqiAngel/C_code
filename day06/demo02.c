#include <stdio.h>

//递归求字符串长度
int str_len(char* str){
    if (*str != '\0')
    {
        return 1 + str_len(str + 1);
    }else{
        return 0;
    }
} 

int main()
{
    /* code */
    char str[] = "bit";
    printf("%d\n", str_len(str));
    return 0;
}
