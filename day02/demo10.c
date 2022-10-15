#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    int a = (int)3.14;
    int b = -1;
    double c = -3.14;
    int d = 0;
    printf("%d\n",a);
    printf("%d\n",a&&b);
    printf("%d\n",a||b);
    printf("%d\n",a&&c);
    printf("%d\n",a&&d);
    // 三目运算符
    int max = a > b ? a : b;
    printf("%d\n",max);
    // 逗号表达式
    int e = (a = a + 1,b = b + a);
    printf("%d\n",e);
    return 0;
}
