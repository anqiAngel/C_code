#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char arr1[20] = "abcdef";
    char arr2[] = "qwer";
    // 只是相对比strcpy()安全
    // 如果长度不够会补'\0'
    strncpy(arr1, arr2, 2);
    printf("%s\n", arr1); // qwcdef
    // 如果长度不够也会结束 以'\0'为结尾 追加完以'\0'为结尾
    strncat(arr1, arr2, 3);
    printf("%s\n", arr1); // qwcdefqwe
    // strncmp()可以指定比较字符个数
    printf("%d\n", strncmp(arr1, arr2, 3)); // qwcdefqwe
    return 0;
}
