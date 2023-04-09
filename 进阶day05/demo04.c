#include <stdio.h>
#include <string.h>

// 枚举类型
// 声明枚举类型
enum color
{
    RED = 5, // 0 5 可以赋初值
    GREEN,   // 1 6
    BLUE     // 2 7
};

int main()
{
    /* code */
    // 枚举类型变量取值是其中一种
    enum color c = BLUE;
    printf("%d\n", RED);   // 0 5
    printf("%d\n", GREEN); // 1 6
    printf("%d\n", BLUE);  // 2 7
    return 0;
}
