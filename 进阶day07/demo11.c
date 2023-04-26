#include <stdio.h>

struct S
{
    /* data */
    char arr[10];
    int age;
    float f;
};

int main()
{
    /* code */
    struct S s = {"hello", 20, 5.5f};
    struct S s1 = {0};
    char str[100] = "";
    // sprintf()格式化输出到字符串 将格式化的数据转化为字符串
    sprintf(str, "%s %d %f", s.arr, s.age, s.f);
    // sscanf()从字符串中读出格式化数据 对结构体分量进行赋值
    sscanf(str, "%s %d %f", s1.arr, &(s1.age), &(s1.f));
    printf("%s\n", str);
    printf("%s %d %f\n", s1.arr, s1.age, s1.f);
    return 0;
}
