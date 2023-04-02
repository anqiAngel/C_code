#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    // 目标字符串必须可变
    char *str = "##########";
    char arr[] = "#####";
    // arr是指针(地址)不能存储字符串
    // arr = "hello";
    char *p = "hello";
    strcpy(arr, "hello");
    char arr1[3] = {'a', 'b', 'c'}; // 随机值
    // 程序崩了
    // strcpy(arr,arr1);
    printf("%s\n", str);
    printf("%s\n", arr);
    printf("%s\n", arr1);
    return 0;
}
