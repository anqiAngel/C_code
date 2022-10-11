#include <stdio.h>

// #define定义的标识符常量
#define PI 3.14
enum Sex{
    male = 3,
    female,
    secret
};

int main()
{
    /* code */
    // 字面常量
    10;
    10.5;
    // const修饰的常变量本质还是变量
    // const int a = 10;
    // a = 100;    
    printf("PI的值%lf\n",PI);
    printf("PI的值%d\n",male);
    printf("PI的值%d\n",female);
    printf("PI的值%d\n",secret);
    system("pause");
    return 0;
}
