#include <stdio.h>
#define M 100

int main()
{
    /* code */
    int a = M;
    // 取消定义#undef M
#undef M
    printf("%d\n",M);
    return 0;
}
