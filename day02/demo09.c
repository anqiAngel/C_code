#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    int a = 10;
    int b = ++a;
    int c = a++;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
