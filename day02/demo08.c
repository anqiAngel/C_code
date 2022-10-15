#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    int array1[10] = {1,2,3,4,5,6,7,8,9,0};
    // 可以不完全初始化。没有初始化的元素默认为\0。
    char array2[5] = {'a','b','c'}; 
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("%c\n",array2[i]);
    }
    int a = 0;
    printf("%d\n",~a);
    return 0;
}
