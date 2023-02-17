#include <stdio.h>

// 全局变量没初始化默认为0 局部变量没初始化默认为随机值
int i;

int main(int argc, char const *argv[])
{
    /* code */
    int j;
    printf("%d %d\n",i,j);
    i--;
    // unsigned i ->11111111111111111111111111111111 -> 4,294,967,295
    // 输出>
    if (i > sizeof(i))
    {
        /* code */
        printf(">\n");
    }else
    {
        /* code */
        printf("<\n");
    }

    return 0;

}
