#include <stdio.h>
#include <stdbool.h>

// 求两个数的最小公倍数
// 加法遍历
int min_mutiple1(int num1,int num2){
    int m = num1 > num2 ? num1 : num2;
    while (true)
    {
        /* code */
        if (m % num1 == 0&&m % num2 == 0)
        {
            /* code */
            break;
        }
        m++;
        
    }
    return m;

}

// 求两个数的最小公倍数
// 乘法遍历
int min_mutiple2(int num1,int num2){
    int i = 1;
    while (true)
    {
        /* code */
        if(((num1 * i)%num2) == 0){
            break;
        }
        i++;
    }
    return num1 * i;

}

// 求两个数的最小公倍数
// 辗转相除法
int min_mutiple3(int num1,int num2){
    int c = 0;//余数
    int t = 0;
    //判断a，b的大小，大的放在前面
    if(num1>num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    //因为最小公倍数=a*b/最大公约数
    //1.a*b
    t = num1 * num2;
    //2.最大公约数
    while(c=num1%num2)//如果余数不为零进入循环
    {
        num1 = num2;//把被除数的值赋给除数
        num2 = c;//把余数的值赋给被除数
    }
    t = t / num2;//最小公倍数
    return t;
}

int main()
{
    /* code */
    printf("%d\n",min_mutiple1(5,10));
    printf("%d\n",min_mutiple2(5,10));
    printf("%d\n",min_mutiple3(5,10));
    return 0;
}