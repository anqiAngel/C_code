#include <stdio.h>

int main()
{
    /* code */
    // ����Ա���� �߸������� ȥ��һ����߷�ȥ��һ����ͷ�ȡƽ��
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
    printf("ƽ��ֵΪ:%d\n", (sum - min - max)/5);

    return 0;
}
