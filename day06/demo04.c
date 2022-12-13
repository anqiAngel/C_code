#include <stdio.h>

// 冒泡排序
void bubble_sort(int arr[], int size){
    // i趟数 n个数字n-1趟排序
    for (int i = 0;i < size - 1;i++){
        //j控制每趟比较次数
        int num = 0;
        for (int j = 0;j < size - 1 - i; j++)
        {   
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                num++;
            }
        }
        if(num == 0){
            break;   
        }
        
    }
}

int main()
{
    /* code */
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    //int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    //求数组大小
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
