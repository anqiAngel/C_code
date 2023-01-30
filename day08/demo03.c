#include <stdio.h>

// 统计一个数二进制形式1的个数
int one_binary_total1(int num){
    int count = 0;
    while (num)
    {
        /* code */
        if(num&1 == 1){ 
            count++;
        }
        num>>=1;
    }
    return count;
    
}
int one_binary_total2(int num){
    int count = 0;
    while (num)
    {
        /* code */
        if(num&1 == 1){ 
            count++;
        }
        num>>=1;
    }
    return count;
    
}

int main()
{
    /* code */
    printf("%d\n",one_binary_total1(4));
    printf("%d\n",one_binary_total1(3));
    printf("%d\n",one_binary_total1(7));
    return 0;
}
