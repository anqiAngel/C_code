#include <stdio.h>

int main()
{
    /* code */
    int n = 9;
    float* pFloat = (float*)&n; 
    printf("n��ֵΪ:%d\n",n); // 9 ������ȡ
    printf("*pFloat��ֵΪ:%f\n",*pFloat); // 0.000000 ���渡��ȡ
    *pFloat = 9.0;
    printf("num��ֵΪ:%d\n",n); // 1091567616 �������ȡ
    printf("*pFloat��ֵΪ:%f\n",*pFloat); // 9.000000 ����渡��ȡ
    return 0;
}
