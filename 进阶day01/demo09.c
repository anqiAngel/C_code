#include <stdio.h>

int main()
{
    /* code */
    int n = 9;
    float* pFloat = (float*)&n; 
    printf("n的值为:%d\n",n); // 9 整存整取
    printf("*pFloat的值为:%f\n",*pFloat); // 0.000000 整存浮点取
    *pFloat = 9.0;
    printf("num的值为:%d\n",n); // 1091567616 浮点存整取
    printf("*pFloat的值为:%f\n",*pFloat); // 9.000000 浮点存浮点取
    return 0;
}
