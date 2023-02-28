#include <stdio.h>

void print(int* p, int sz){
    for (int i = 0; i < sz; i++)
    {
        /* code */
        printf("%d ", *(p+i));
    }
    
}

void test(int** pr){

    // **pr是a
    printf("%d",**pr);

}
int main()
{
    /* code */
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    // p是一级指针
    // 一级指针传参
    print(p,sz);
    int a = 10;
    int* pa = &a;
    // ppa是二级指针
    int** ppa = &p;
    printf("\n");
    test(ppa);
    printf("\n");
    test(&pa); // 传一级指针地址
    int* arr[10] = {0};
    test(arr);
    return 0;
}
