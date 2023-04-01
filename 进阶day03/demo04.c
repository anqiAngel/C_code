#include <stdio.h>
#include <string.h>

// 字符串左旋1
// 反复执行将第一个元素用tmp存储 其余后面元素前移 将最后一个元素赋值为tmp
void left_rotate_string1(char str[], int k)
{
    int len = strlen(str);
    for (int i = 0; i < k; i++)
    {
        /* code */
        char tmp = *str;
        for (int j = 0; j < len - 1; j++)
        {
            /* code */
            *(str + j) = *(str + j + 1);
        }
        *(str + len - 1) = tmp;
    }
}

// 字符串反转
void string_reverse(char *left, char *right)
{
    while (left < right)
    {
        /* code */
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

// 字符串左旋2
// ABCDE k = 2 AB CDE -> BA EDC -> CDEAB 左旋
// 1.左右逆序 0 - k
// 2.右边逆序 k - len
// 3.整体逆序 0 - len
void left_rotate_string2(char str[], int k)
{   
    k =  k % 5;
    int len = strlen(str);
    string_reverse(str, str + k - 1);
    string_reverse(str + k, str + len - 1);
    string_reverse(str, str + len - 1);
}

int main()
{
    /* code */
    char str[] = "ABCDE";
    left_rotate_string1(str, 9);
    char str1[] = "ABCDE";
    left_rotate_string2(str1, 9);
    printf("%s\n", str);
    printf("%s\n", str1);
    return 0;
}
