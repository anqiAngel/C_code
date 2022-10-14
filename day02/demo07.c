#include <stdio.h>
#include <string.h>

int add(int a ,int b){
    return a + b;
}

int main()
{
    /* code */
    int a = 0;
    int b = 0;
    printf("请输入两个整数:>");
    scanf("%d %d",&a,&b);
    int result = add(a, b);
    printf("结果为:%d",result); 
    return 0;
}