#include <stdio.h>
#include <stdlib.h>

int Add(int a,int b){
    return a + b;
}
int Sub(int a,int b){
    return a - b;
}

int main()
{
    /* code */
    // 函数指针数组
    int (*arr[2])(int,int) = {Add,Sub};    
    return 0;
}
