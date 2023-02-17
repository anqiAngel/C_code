#include <stdio.h>

int main()
{
    /* code */
    // 求前5项 a + aa + aaa + aaaa + aaaaa
    int a = 0;
    int n = 0;
    scanf("%d %d",&a,&n);
    int sum = 0;
    // 每一项
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        ret = ret * 10 + a;
        sum += ret;
    }
    printf("%d\n",sum);
    int arr[10] = {1, 10, 8, 8, 5, 9, 7, 8, 10, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;
    for (int i = 0; i < len; i++)
    {
        /* code */
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;

}
