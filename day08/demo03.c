#include <stdio.h>

// 统计一个数二进制形式1的个数 对负数不好用 参数得加上unsigned int
// 存储时转换为补码-1 -> 11111111111111111111111111111111 运算时是无符号数右移高位补0
int one_binary_total1(unsigned int num){
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
// 对于负数不好用 参数得加上unsigned int
// 存储时转换为补码-1 -> 11111111111111111111111111111111
int one_binary_total2(unsigned int num){
    int count = 0;
    while (num)
    {
        /* code */
        if(num%2 == 1){ 
            count++;
        }
        num/=2;
    }
    return count;
    
}

int main()
{
    /* code */
    printf("%d\n",one_binary_total1(-1));
    printf("%d\n",one_binary_total2(-1));
    printf("%d\n",one_binary_total1(7));
    return 0;
}
