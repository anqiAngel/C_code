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
    // ����������ASCIIֵ-1----127----0  0 ->'\0' 255
    printf("%d\n",strlen(a));
    char b = '\0';
    printf("%d\n",b);
    // ��ѭ��
    // i��ԶС�ڵ���255
    for (unsigned char i = 0; i <= 255; i++)
    {
        /* code */
        printf("hello world\n");
    }
    return 0;

}
