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

// qsort_bubble()整型比较函数
int cmp_int(const void* e1, const void* e2){
    return (*(int*)e1 - *(int*)e2);
}

// 元素交换函数
void Swap(char* buf1, char* buf2, int width){
    for (int i = 0; i < width; i++)
    {
        /* code */
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

// 这样写函数冗余度低
void qsort_bubble(void *base, int size, int width, int (*cmp)(const void *e1, const void *e2)){
    // 趟数
    for (int i = 0; i < size - 1; i++)
    {
        /* code */
        // 比较次数
        for (int j = 0; j < size - 1 - i; j++)
        {
            /* code */
            if (cmp((char*)base + j * width, (char*)base + (j+1) * width) > 0)
            {
                /* code */
                Swap((char*)base + j * width, (char*)base + (j+1) * width, width);
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
    int arr1[] = {8,4,6,7,4,5,2,3,0,1};
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ",arr1[i]);
    }
    printf("\n");
    qsort_bubble(arr1,10,sizeof(int),cmp_int);
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ",arr1[i]);
    }
    printf("\n");
    return 0;
}
