#include <stdio.h>
#include <string.h>
#include <assert.h>

// 实现memcpy()
void *my_memcpy(void *dest, const void *source, unsigned int num)
{
    assert(dest && source);
    for (int i = 0; i < num; i++)
    {
        /* code */
        // void *不能直接解引用和运算
        *((char *)dest + i) = *((char *)source + i);
    }
    return dest;
};
// 实现memmove()函数 可以处理内存重叠的情况
void *my_memmove(void *dest, const void *source, unsigned int num)
{
    assert(dest && source);
    if (dest < source)
    {
        /* code */
        for (int i = 0; i < num; i++)
        {
            /* code */
            // 前 -> 后
            *((char *)dest + i) = *((char *)source + i);
        }
    }
    else
    {
        /* code */
        for (int i = num - 1; i >= 0; i--)
        {
            /* code */
            // 后 -> 前
            *((char *)dest + i) = *((char *)source + i);
        }
    }
    return dest;
}

int main()
{
    /* code */
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 使用my_memcpy()将1, 2, 3, 4, 5 ->挪到 3, 4, 5, 6, 7
    // my_memcpy()挪动元素是一个一个移的 1 2 1 2 1 2 1 8 9 10
    // memcpy()函数应该拷贝不重叠的内存 可以拷贝没有重叠的内存
    // my_memcpy(arr1 + 2, arr1, 20);
    // memmove()函数可以处理内存重叠的情况
    my_memmove(arr1 + 2, arr1, 20);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}
