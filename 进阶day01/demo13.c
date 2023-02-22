#include <stdio.h>

int main()
{
    /* code */
    // n元可以喝几瓶可乐 1元一瓶可乐 2个瓶可以换一瓶可乐
    // 钱数
    int money = 0;
    scanf("%d",&money);
    // 找规律的计算方法 2*money-1
    if(money > 0)
        printf("%d\n",2*money-1);
    // 瓶数
    int total = money;
    // 空瓶数
    int empty = money; 
    // 用瓶子换的计算
    while (empty / 2)
    {
        /* code */
        total = total + empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("%d\n",total);
    return 0;

}
