#include <stdio.h>
#include <string.h>
// 字符串左旋
void left_rotate_string1(char str[], int k)
{   
    for (int i = 0; i < k; i++)
    {
        /* code */
        int len = strlen(str);
        char tmp = *str;
        for (int j = 0; j < len - 1; j++)
        {
            /* code */
            *(str+j) = *(str+j+1);
        }
        *(str + len - 1) = tmp;  
    }
    
}

int main()
{
    /* code */
    char str[] = "ABCDE";
    left_rotate_string1(str,3);
    printf("%s\n",str);
    return 0;
}
