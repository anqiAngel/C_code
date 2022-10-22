#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // 输出输入的数字(0-9)
    int ch = 0;
    while ((ch = getchar()) != EOF) 
    {
        /* code */
        if(ch < '0'|| ch > '9'){
            continue;
        }
        // printf("%c",ch);
        putchar(ch); // 等价于上面的print代码
    }
    
    return 0;
}
