#include <stdio.h>

int main()
{
    /* code */
    char c1 = 'A';
    int a = c1;
    short b = c1;
    long c = c1;
    printf("A��ASCII��%d\n",a);
    printf("char�Ĵ�С��%d�ֽ�\n", sizeof(c1));
    printf("short�Ĵ�С��%d�ֽ�\n", sizeof(b));
    printf("int�Ĵ�С��%d�ֽ�\n", sizeof(a));
    printf("long�Ĵ�С��%d�ֽ�\n", sizeof(c));
    printf("float�Ĵ�С��%d�ֽ�\n", sizeof(float));
    printf("double�Ĵ�С��%d�ֽ�\n", sizeof(double));
    system("pause");
    return 0;
}


