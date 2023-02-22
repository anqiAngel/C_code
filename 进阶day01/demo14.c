#include <stdio.h>

// �������е���������ǰ��,ż�����ں���
// ��������˼��
void move(int arr[],int size){
    int left = 0;
    int right = size - 1;
    while (left < right)
    {   
        /* code */
        // ��һ��ż��
        while((left < right)&&arr[left]%2!=0){
            left++;
        }
        // ��һ������
        while((left < right)&&arr[right]%2==0){
            right--;
        }
        // ����
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
