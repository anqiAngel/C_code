#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    short s = 5;
    int a = 4;
    printf("%d\n",sizeof(s = a + 6)); // 2
    printf("%d\n",s); // 5 上一个sizeof()中表达式不计算也不会执行
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = (int*)(&arr+1);
    printf("%d %d", *(arr + 1), *(ptr - 1)); // 2 5
    return 0;
}
