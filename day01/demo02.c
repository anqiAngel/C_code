#include <stdio.h>

int main()
{
    /* code */
    char c1 = 'A';
    int a = c1;
    short b = c1;
    long c = c1;
    printf("A的ASCII是%d\n",a);
    printf("char的大小是%d字节\n", sizeof(c1));
    printf("short的大小是%d字节\n", sizeof(b));
    printf("int的大小是%d字节\n", sizeof(a));
    printf("long的大小是%d字节\n", sizeof(c));
    printf("float的大小是%d字节\n", sizeof(float));
    printf("double的大小是%d字节\n", sizeof(double));
    system("pause");
    return 0;
}


