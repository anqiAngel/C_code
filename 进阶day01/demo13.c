#include <stdio.h>

int main()
{
    /* code */
    // nԪ���Ժȼ�ƿ���� 1Ԫһƿ���� 2��ƿ���Ի�һƿ����
    // Ǯ��
    int money = 0;
    scanf("%d",&money);
    // �ҹ��ɵļ��㷽�� 2*money-1
    if(money > 0)
        printf("%d\n",2*money-1);
    // ƿ��
    int total = money;
    // ��ƿ��
    int empty = money; 
    // ��ƿ�ӻ��ļ���
    while (empty / 2)
    {
        /* code */
        total = total + empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("%d\n",total);
    return 0;

}
