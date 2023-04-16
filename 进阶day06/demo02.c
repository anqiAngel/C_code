#include <stdio.h>

int main()
{
    /* code */
    // 公务员考试 七个人评分 去掉一个最高分去掉一个最低分取平均
    int score = 0;
    int min = 100;
    int max = 0;
    int sum = 0;
    int n = 0; 
    while (scanf("%d", &score) != EOF)
    {
        /* code */
        sum += score;
        if (score < min)
        {
            /* code */
            min = score;
        }
        if (score > max)
        {
            /* code */
            max = score;
        }
        n++;
        if (n == 7)
        {
            /* code */
            break;
        }
        
    }
    printf("平均值为:%d\n", (sum - min - max)/5);

    return 0;
}
