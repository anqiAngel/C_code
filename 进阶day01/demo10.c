#include <stdio.h>

// ȫ�ֱ���û��ʼ��Ĭ��Ϊ0 �ֲ�����û��ʼ��Ĭ��Ϊ���ֵ
int i;

int main(int argc, char const *argv[])
{
    /* code */
    int j;
    printf("%d %d\n",i,j);
    i--;
    // unsigned i ->11111111111111111111111111111111 -> 4,294,967,295
    // ���>
    if (i > sizeof(i))
    {
        /* code */
        printf(">\n");
    }else
    {
        /* code */
        printf("<\n");
    }

    return 0;

}
