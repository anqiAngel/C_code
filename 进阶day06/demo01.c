#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* code */
    // malloc(��С) ������ڴ� �ɹ����ؿռ��׵�ַ ʧ�ܷ���NULL
    int *p = (int *)malloc(10 * sizeof(int));
    if (p == NULL)
    {
        /* code */
        perror("��������");
    }
    // malloc(��С) �����ʼ�� �ռ��е�ֵΪ���ֵ
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", *(p + i));
    }
    printf("\n");
    // calloc(�ռ����,��С) �ռ�ֵ��ʼ��Ϊ0
    int *p1 = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", *(p1 + i));
    }
    printf("\n");
    // relloc()���������
    // 1.ԭ���Ŀռ�����г���Ŀռ� ֱ�����·��� 
    // 2.ԭ���Ŀռ����û�г���Ŀռ� �ں����ҿռ���� û�з���NULL 
    // ���ֱ����ԭ����ָ��ֱ�Ӵ洢 �����ԭ����ָ��p1 = NULL�Ҳ���ԭ���Ŀռ��� �����ڴ�й©
    int *ptr = (int *)realloc(p1, 200000000000000 * sizeof(int));
    if (ptr != NULL)
    {
        /* code */
        p1 = ptr;
    }else
    {
        /* code */
        printf("�ռ䲻��\n");
        perror("������");
    }
    free(p);
    p = NULL;
    free(p1);
    p1 = NULL;
    free(ptr);
    ptr = NULL;
    return 0;
}
