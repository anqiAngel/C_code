#include <stdio.h>
// 使用宏个性化打印 #X 只能在宏中使用
#define PRINT(X, FORMAT) printf("the value of " #X " is " FORMAT "\n", X)
// ##将两个字符串连起来 只能宏使用 
#define CAT(X,Y) X##Y

int main()
{
    /* code */
    int a = 10;
    PRINT(a, "%d"); // the value of a is 10
    int b = 10;
    PRINT(b, "%d"); // the value of b is 10
    int c = 10;
    PRINT(c, "%d"); // the value of c is 10
    float d = 5.5f;
    PRINT(d, "%f"); // the value of d is 5.500000
    int abc = 6;
    printf("%d\n",CAT(a,bc)); // 6
    printf("%d\n",CAT(ab,c)); // 6
    return 0;
}
