#include <stdio.h>

// �жϴ�С�˺���
void check_sys(int num){
    char* byte1 = (char*)&num;
    // *byte����1���ֽڵĿռ� 
    if (*byte1 == 1)
    {
        /* code */
        printf("С���ֽ���\n");
    }else
    {
        /* code */
        printf("����ֽ���\n");
    }
}

int main()
{
    /* code */
    int num = 1;
    char* byte1 = (char*)&num;
    // *byte����1���ֽڵĿռ�
    int num1 = 0x11223344; 
    short* byte2 = (short*)&num1;
    printf("%d\n",*byte2); 
    if (*byte1 == 1)
    {
        /* code */
        printf("С���ֽ���\n");
    }else
    {
        /* code */
        printf("����ֽ���\n");
    }
    check_sys(num);
    return 0;

}
