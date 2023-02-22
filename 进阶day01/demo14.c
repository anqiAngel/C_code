#include <stdio.h>

// 将数组中的奇数放在前面,偶数放在后面
// 快速排序思想
void move(int arr[],int size){
    int left = 0;
    int right = size - 1;
    while (left < right)
    {   
        /* code */
        // 找一个偶数
        while((left < right)&&arr[left]%2!=0){
            left++;
        }
        // 找一个奇数
        while((left < right)&&arr[right]%2==0){
            right--;
        }
        // 交换
        if (left < right)
        {
            /* code */
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        } 
    }
    
}

int main()
{
    /* code */
    int arr[] = {0,1,3,4,8,7,6,8,6,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    move(arr,size);
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
