#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include "lib/add.h"
#include "lib/sub.h"

int main()
{
    /* code */
    int a = 10;
    int b = 20;
    int c = Add(a,b);
    int d = Sub(a,b);
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}
