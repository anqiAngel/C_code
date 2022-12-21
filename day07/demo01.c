#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    int a = 1;
    int b = 1>>4;
    char str1[] = "hhhh";
    char str2[] = "heheh";
    char* c = "hehehe";
    char* d = "huhuhu";
    int e = (a + 1,b + a + 1);
    printf("%d\n",b);
    printf("%d\n",e);
    printf("%d\n",strcmp(c,d));
    return 0;
}
