#include <stdio.h>

// #define����ı�ʶ������
#define PI 3.14
enum Sex{
    male = 3,
    female,
    secret
};

int main()
{
    /* code */
    // ���泣��
    10;
    10.5;
    // const���εĳ��������ʻ��Ǳ���
    // const int a = 10;
    // a = 100;    
    printf("PI��ֵ%lf\n",PI);
    printf("PI��ֵ%d\n",male);
    printf("PI��ֵ%d\n",female);
    printf("PI��ֵ%d\n",secret);
    system("pause");
    return 0;
}
