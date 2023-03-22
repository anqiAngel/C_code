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
    printf("请输入2个操作数>:");
    scanf("%d %d",&x, &y);
    return fun(x, y);
}

// 回调函数机制实现计算器
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
        printf("请选择>:");
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
                printf("退出程序\n");
                break;       
            default:
                printf("选择错误,重新选择!\n");
                break;
        }

    } while (input);  
    return 0;
}
