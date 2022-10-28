#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>

// 定义一个判断两数中最大值的函数
int get_max(int x,int y){
    return x > y ? x : y;
}

// 交换两个整数 传址调用
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    /* code */
    int max = get_max(10,20);
    printf("%d\n",max);
    //system("cal");
    int a = 10;
    int b = 20;
    printf("交换前:%d %d");
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
