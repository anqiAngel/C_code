#include <stdio.h>
#include <stdlib.h> 

// ������Ķ���
union Un
{
    /* data */
    char c; // ռһ���ֽ�
    int i;  // ռ�ĸ��ֽ� ��һ���ֽ��� char c����
    // ��i���ܻ�ı�c ��c���ܻ�ı�i
};

union Un1
{
    /* data */
    char a[5]; // 5
    int i; // 4
} un1;


// ���ϵͳ�Ǵ�˴洢����С�˴洢 �ṹ��ⷨ
int check_sys(){

    union Un
    {
        /* data */
        char c;
        int i;
    } u;
    u.i = 1;
    if (u.c == 1)
    {
        /* code */
        // С�˷���0
        return 0;
    }else
    {
        /* code */
        // ��˷���1
        return 1;
    }
       
}
    
int main(int argc, char const *argv[])
{
    /* code */
    union Un u;
    printf("%p\n",&u); 
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));
    printf("%d\n",sizeof(u)); // 4
    if (check_sys())
    {
        /* code */
        printf("��˴洢\n");
    }else
    {
        /* code */
        printf("С�˴洢\n");
    }
    printf("%d\n",sizeof(un1)); // 8
    return 0;

}