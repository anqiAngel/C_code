#include <stdio.h>

int main()
{
    /* code */
    // ��*��ӡ����
    int line = 0;
    scanf("%d",&line);
    // �ϰ벿��
    for (int i = 0; i < line; i++)
    {
        /* code */
        // ��ӡ�ո�
        for (int j = 0; j < line - 1 - i; j++)
        {
            /* code */
            printf(" ");
        }
        // ��ӡ*
        for (int k = 0; k < 2*i+1; k++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }

    // �°벿��
    for (int i = 0; i < line - 1; i++)
    {
        /* code */
        // ��ӡ�ո�
        for (int j = 0; j <= i; j++)
        {
            /* code */
            printf(" ");
        }
        // ��ӡ*
        for (int k = 0; k < 2*(line-1-i)-1; k++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
