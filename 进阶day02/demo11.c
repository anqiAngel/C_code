#include <stdio.h>

int main()
{
    /* code */
    // int a[3][2] = {{0, 1},{2, 3},{4, 5}}; // 正常初始化
    int a[3][2] = {(0, 1),(2, 3),(4, 5)}; // 逗号表达式初始化 {1, 3, 5} -> {{1, 3}, {5, 0}, {0, 0}}
    int* p;
    p = a[0];
    printf("%d",p[0]); // 1
    return 0;
}
