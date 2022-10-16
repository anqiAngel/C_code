#include <stdio.h>
#include <string.h>

// type用来给类型重新命名
typedef unsigned int u_int;
int g = 100;
// 打印10个2
void test(){
    int a = 1;
    a++;
    printf("%d",a);
}
// 打印2到11
void test1(){
    // static修饰出函数体之后a不销毁
    static int a = 1;
    a++;
    printf("%d",a);
}

// int main()
// {
//     /* code */
//     unsigned int a = 100; 
//     u_int b = 100;
//     int i = 0;
//     int j = 0;
//     while (i < 10)
//     {
//         /* code */
//         test();
//         i++;
//     }
//     printf("\n");
//     while (j < 10)
//     {
//         /* code */
//         test1();
//         j++;
//     }
    
    
//     return 0;
// }
