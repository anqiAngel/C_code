#include <stdio.h>
#include <string.h>

// I like beijing.
// beijing. like I
// 字符串的反转
void string_reverse(char*start,char* end){
    while (end>start)
    {
        /* code */
        char tmp = 0;
        tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
    
}

int main()
{
    /* code */
    char str[100] = {0};
    // scanf获取字符串遇到空格 获取字符串结束
    // scanf("%s",&str);
    // gets(str)读取一行 放到str中
    gets(str);
    int len = strlen(str);
    string_reverse(str,str+len-1);
    printf("%s\n",str);
    // 1.字符串整体翻转
    // 2.单词翻转
    char* start = str;
    while (*start)
    {
        /* code */
        char* end = start;
        while (*end != ' '&&*end != '\0')
        {
            /* code */
            end++;
        }
        string_reverse(start,end-1);
        if (*end == ' ')
        {
            /* code */
            start = end+1;
        }else{
            start = end;
        }
    }
    printf("%s\n",str);
    return 0;
}
