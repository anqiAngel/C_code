#include <stdio.h>
#define PI 3.14
#define reg register
#define do_forever for(;;)

int main()
{
    /* code */
    float a = PI;
    reg int b = 6;
    printf("%.2f\n", a); 
    printf("%d\n", b); 
    // 死循环
    do_forever; 
    return 0;
}
