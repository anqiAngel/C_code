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

// 函数指针调用函数方法
int main()
{
    /* code */
    // 函数指针数组 -> 转移表
    // 函数类型是统一的才可以
    int (*pfArr[5]) (int, int) = {NULL, Add, Sub,Mul, Div};
    int input = 0; 
    do{
        /* code */
        menu();
        int x = 0;
        int y = 0;
        double ret = 0;
        printf("请选择>:");
        scanf("%d",&input);
        if (input >= 1 && input <= 4)
        {
            /* code */
            printf("请输入两个操作数:>");
            scanf("%d %d",&x, &y);
            ret = (pfArr[input])(x, y);
            printf("ret=%lf\n",ret);
        }else if (input == 0)
        {
            /* code */
        }else
        {
            /* code */
            printf("输入有误!!!\n");
        }
        
    } while (input);  
    
    return 0;
}
