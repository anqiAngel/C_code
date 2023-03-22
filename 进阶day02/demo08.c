#include <stdio.h>

void Bubble_Sort(int arr[],int size){
    // 趟数
    for (int i = 0; i < size - 1; i++)
    {
        /* code */
        // 比较次数
        for (int j = 0; j < size - 1 - i; j++)
        {
            /* code */
            if (arr[j] > arr[j+1])
            {
                /* code */
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp; 
            }

        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");
    Bubble_Sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
