#include <stdio.h>
#include <string.h>

// 获取两个数中的较大值
int Max(int a,int b){
    return a > b ? a : b;
}

int main()
{
    /* code */
    int a ,b;
    scanf("%d %d",&a,&b);
    int max = Max(a, b);
    printf("%d",max);
    return 0;
}
