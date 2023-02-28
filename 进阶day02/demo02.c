#include <stdio.h>

int Add(int a, int b){
    return a + b;
}

int main()
{
    /* code */
    // 函数指针:指向函数的指针 存放函数地址的指针
    // &函数名 取得的就是函数地址
    // &函数名 = 函数名
    // &数组名 != 数组名
    printf("%p\n",&Add);
    printf("%p\n",Add);
    // 函数指针声明 返回类型 (*指针名)(形参1类型,形参2类型)
    int (*pf)(int, int) = &Add;
    pf = Add; // Add == pf -> pf = (*pf)
    // 函数指针调用函数 (*指针名)(实参1,实参2)
    printf("%d\n",(*pf)(3,5)); // 1
    // 函数指针解引用可以略*
    printf("%d\n",pf(3,5)); // 2 
    printf("%d\n",Add(3,5)); // 3
    return 0;
}
