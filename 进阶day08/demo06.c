#include <stdio.h>
// 求两数较大值
#define MAX(a,b) ((a)>(b)?(a):(b))

int main()
{
    /* code */
    int a = 0;
    int b = 2;
    int max = MAX(a++, b++);
    printf("%d\n",max); // 3 出现意料之外的结果 副作用会传递到宏中
    return 0;
}
