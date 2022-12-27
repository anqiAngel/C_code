#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    // 动态内存分配函数malloc(size) 保存空间首地址 内存空间中的内容是随机的
    int * p = (int*)malloc(10 * sizeof(int));
    // free(指向空间指针空间首地址)释放申请的堆区空间 这个空间必须是malloc()、calloc()、relloc()函数申请的 (全部释放)
    // 只能free一次不能多次free
    free(p);
    // 防止野指针p赋值为NULL
    p = NULL;
    // 动态内存分配函数calloc(nmem,size) 保存空间首地址 两个参数 参数1 分配块数 参数2 块的大小(每块的字节数) 内存空间中的内容是0
    // 前两种分配函数分配多了或者少了 一般使用realloc(旧的指针,新的内存大小)函数来重新分配
    // 动态内存分配的空间只有在free函数和程序结束之后释放
    int * q = (int*)calloc(2,10 * sizeof(int));
    q = (int*)realloc(q,10);
    free(q);
    q = NULL;
    // 内存泄漏 申请的内存空间 首地址没了 找不到了 内存无法使用了 无法释放了 这块内存就泄漏了
    return 0;
}
