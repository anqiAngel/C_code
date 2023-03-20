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

int main()
{
    /* code */
    // 函数指针
    int (*pf1) (int, int) = Add;
    int (*pf2) (int, int) = Sub;
    // 函数指针数组
    int (*pfArr[2]) (int, int) = {Add, Sub};
    int input = 0; 
    do{
        /* code */
        menu();
        int x = 0;
        int y = 0;
        double ret = 0;
        printf("请选择>:");
        scanf("%d",&input);
        if (input == 1|input == 2|input == 3|input == 4)
        {
            /* code */
            printf("请输入两个操作数:>");
            scanf("%d %d",&x, &y);
        }
        switch (input)
        {
            case 1:
                /* code */
                ret = Add(x,y); 
                break;
            case 2:
                /* code */
                ret = Sub(x,y); 
                break; 
            case 3:
                /* code */
                ret = Mul(x,y); 
                break;
            case 4:
                /* code */
                ret = Div(x,y); 
                break;
            case 0:
                /* code */
                printf("退出程序\n");
                break;       
            default:
                printf("选择错误,重新选择!\n");
                break;
        }
        if (input == 1|input == 2|input == 3|input == 4)
        {
            /* code */
            printf("ret=%lf\n",ret);
        }
    } while (input);  
    
    return 0;
}
