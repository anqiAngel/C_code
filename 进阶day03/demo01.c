#include <stdio.h>

int main()
{
    /* code */
    char* a[] = {"work","at","alibaba"}; // 将w、a、a的地址赋给数组的每一个元素
    char** pa = a;
    pa++;
    printf("%s\n",*pa); // 输出at
    char* c[] = {"ENTER","NEW","POINT","FIRST"};
    char* cp[] = {c+3, c+2, c+1, c}; // cp是"FIRST"的首字符指针
    char*** cpp = cp; // cpp是"FIRST"的首字符指针的指针
    printf("%s\n",**++cpp); // "POINT"
    printf("%s\n",*--*++cpp + 3); // ""
    printf("%s\n",*cpp[-2] + 3); //
    printf("%s\n",cpp[-1][-1] + 1); //
    return 0;
}
