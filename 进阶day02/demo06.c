#include <stdio.h>

int Add(int a, int b){
    return a + b;
}

int Sub(int a, int b){
    return a - b;
}

int Mul(int a, int b){
    return a * b;
}

int Div(int a, int b){
    return a / b;
}

void menu(){
    printf("**************************\n");
    printf("**************************\n");
    printf("*****1.add      2.sub*****\n");
    printf("*****3.mul      4.div*****\n");
    printf("**********0.exit**********\n");
}

// ����ָ����ú�������
int main()
{
    /* code */
    // ����ָ������ -> ת�Ʊ�
    // ����������ͳһ�Ĳſ���
    int (*pfArr[5]) (int, int) = {NULL, Add, Sub,Mul, Div};
    int input = 0; 
    do{
        /* code */
        menu();
        int x = 0;
        int y = 0;
        double ret = 0;
        printf("��ѡ��>:");
        scanf("%d",&input);
        if (input >= 1 && input <= 4)
        {
            /* code */
            printf("����������������:>");
            scanf("%d %d",&x, &y);
            ret = (pfArr[input])(x, y);
            printf("ret=%lf\n",ret);
        }else if (input == 0)
        {
            /* code */
        }else
        {
            /* code */
            printf("��������!!!\n");
        }
        
    } while (input);  
    
    return 0;
}
