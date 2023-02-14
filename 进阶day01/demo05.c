#include <stdio.h>

// 判断大小端函数
void check_sys(int num){
    char* byte1 = (char*)&num;
    // *byte访问1个字节的空间 
    if (*byte1 == 1)
    {
        /* code */
        printf("小端字节序\n");
    }else
    {
        /* code */
        printf("大端字节序\n");
    }
}

int main()
{
    /* code */
    int num = 1;
    char* byte1 = (char*)&num;
    // *byte访问1个字节的空间
    int num1 = 0x11223344; 
    short* byte2 = (short*)&num1;
    printf("%d\n",*byte2); 
    if (*byte1 == 1)
    {
        /* code */
        printf("小端字节序\n");
    }else
    {
        /* code */
        printf("大端字节序\n");
    }
    check_sys(num);
    return 0;

}
