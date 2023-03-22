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

double Calc(int (*fun)(int,int)){
    int x = 0;
    int y = 0;
    printf("������2��������>:");
    scanf("%d %d",&x, &y);
    return fun(x, y);
}

// �ص���������ʵ�ּ�����
int main(int argc, char const *argv[])
{
    /* code */
    int input = 0; 
        do{
        /* code */
        menu();
        int x = 0;
        int y = 0;
        double ret = 0;
        printf("��ѡ��>:");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                /* code */
                ret = Calc(Add);
                printf("ret=%lf\n",ret); 
                break;
            case 2:
                /* code */
                ret = Calc(Sub);
                printf("ret=%lf\n",ret); 
                break; 
            case 3:
                /* code */
                ret = Calc(Mul); 
                printf("ret=%lf\n",ret);
                break;
            case 4:
                /* code */
                ret = Calc(Div); 
                printf("ret=%lf\n",ret);
                break;
            case 0:
                /* code */
                printf("�˳�����\n");
                break;       
            default:
                printf("ѡ�����,����ѡ��!\n");
                break;
        }

    } while (input);  
    return 0;
}
