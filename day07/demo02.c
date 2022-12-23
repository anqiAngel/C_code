#include <stdio.h>

int main()
{
    /* code */
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = arr;
    int *pend = p + 9;
    while (p<=pend)
    {
        /* code */
        printf("%d\n",*p);
        p++;
    }
    printf("%d",&arr[9]-&arr[0]);
    
    return 0;
}
