#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    int a = 10;
    printf("%p\n",&a);
    int* pa = &a; // pa是用来存放地址的,在C语言中pa称为指针变量
    // *说明pa是指针变量 int说明pa指向的对象是int类型的
    *pa = 20; // *是解引用 *pa就是通过pa里的地址找到a
    printf("%d\n",a);
    printf("%d\n",sizeof(pa));
    return 0;
}
