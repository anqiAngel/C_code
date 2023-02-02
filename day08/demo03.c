#include <stdio.h>
//统计二进制1个的数方法1
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

//统计二进制1个的数方法2
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

//统计二进制1个的数方法3
int one_binary_total3(int num){
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        /* code */
        if (num&1==1)
        {
            /* code */
            count++;
        }
        num>>=1;    
    } 
    return count; 
}

//统计二进制1个的数方法4
// n = n & n-1每一次可以去掉一个1
// n = 15 1111 14 1110 n = 1110 
// ... n = 1000 n-1 = 0111 n = 0000 4次 说明原数n进行几次n = n & n-1运算就有几个1
int one_binary_total4(int num){
    int count = 0;
    while (num)
    {
        /* code */
        num = num & num-1;
        count++;
    } 
    return count; 
}

// 判断一个数是否为2的n次方
// 2的n次方2进制序列中只有一个1 去掉一个1为0
int judge_2n(int num){
    if ((num & (num-1))==0)
    {
        /* code */
        return 1;  
    }else{
        /* code */
        return 0;  
    } 
}

// 两个整数二进制位不同的个数1
// 一位一位对比
int binary_different1(int num1,int num2){
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        /* code */
        if (((num1>>i)&1) != ((num2>>i)&1))
        {
            /* code */
            count++;
        }
        
    } 
    return count;   
}

// 两个整数二进制位不同的个数2
// 先异或再统计异或结果中1的个数
int binary_different2(int num1,int num2){
    /* code */
    int ret = num1^num2;
    int count = one_binary_total1(ret);
    return count;   
}

// 按奇数偶数输出二进制位
void binary_print(int num){
    /* code */
    // 奇数位
    for(int i = 31;i>=1;i-=2){
        printf("%d ",((num>>i)&1));
    }
    printf("\n");
    // 偶数位
    for(int i = 30;i>=0;i-=2){
        printf("%d ",((num>>i)&1));
    }
    printf("\n");     
}

// 不用中间变量temp交换两数
// 用异或
// 两个相同的数异或为0 0异或任何数都等于任何数
void swap(void){
    /* code */
    int a = 10;
    int b = 20;
    printf("%d %d\n",a,b);
    a = a ^ b;
    b = a ^ b; // a^b^b = a
    a = a ^ b; // a^b^a = b
    printf("%d %d\n",a,b);
}

int main()
{
    /* code */
    printf("%d\n",one_binary_total1(-1));
    printf("%d\n",one_binary_total2(-1));
    printf("%d\n",one_binary_total3(-1));
    printf("%d\n",one_binary_total4(-1));
    printf("%d\n",one_binary_total1(7));
    printf("%d\n",judge_2n(3));
    printf("%d\n",binary_different1(22,33));
    printf("%d\n",binary_different2(22,33));
    binary_print(100);
    swap();
    return 0;
}
