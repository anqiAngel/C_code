#include <stdio.h>
#include <stdlib.h>
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
}

int main()
{
    /* code */
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[20] = {0};
    // 拷贝arr1前5个元素(20字节)到arr2
    memcpy(arr2, arr1, 20);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ", arr2[i]);
    }
    printf("\n");
    // 拷贝arr1前5个元素(20字节)到arr2
    my_memcpy(arr2, arr1, 40);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
