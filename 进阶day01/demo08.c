#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char a[1000];
    int i;
    for (i = 0; i < 1000; i++)
    {
        /* code */
        a[i] = -1 - i;
    }
    // 计算机存的是ASCII值-1----127----0  0 ->'\0' 255
    printf("%d\n",strlen(a));
    char b = '\0';
    printf("%d\n",b);
    // 死循环
    // i永远小于等于255
    for (unsigned char i = 0; i <= 255; i++)
    {
        /* code */
        printf("hello world\n");
    }
    return 0;

}
