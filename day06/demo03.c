#include <stdio.h>
// 递归阶乘
int fact(int num){
    if(num == 1){
        return 1;
    }else{
        return num * fact(num - 1);
    }
}
// 递归斐波那契数列 效率低
int fib1(int num){
    if (num > 2)
    {
        /* code */
        return fib1(num - 1) + fib1(num - 2);
    }else{
        return 1;
    } 
}
// 迭代斐波那契数列
int fib2(int num){
    int a = 1;
    int b = 1;
    int c = 1;
    while (num > 2)
    {
        /* code */
        c = a + b;
        b = c;
        a = b;
        num--;
    }
    return c;
}
int main()
{
    /* code */
    int a = fact(3);
    int b = fib1(3);
    int c = fib2(3);
    printf("%d %d %d",a,b,c);
    return 0;
}
