#include <stdio.h>
#include <string.h>

struct people
{
    /* data */
    // �ṹ���Ա �������� ���� + ������
    int id;
    char name[20];
}p1={1,"����"};

struct student
{
    /* data */
    struct people p; // ����Ƕ�׽ṹ��
    int age;
    char phone_number[20];
}stu1={{2,"����"},18,"10086"}; // �������̴����ṹ���������ʼ��


int main()
{
    /* code */
    // �ṹ����{}��ʼ�� ����Ƕ��
    struct student stu2 = {{3,"����"},18,"10010"};
    struct student* p1 = &stu2;
    // �ṹ���Ա�ķ��� �ṹ�������(������).�ṹ���Ա������
    printf("%d %s %d %s\n",stu2.p.id,stu2.p.name,stu2.age,stu2.phone_number);
    // ָ����� ָ��->�ṹ���Ա��
    printf("%d %s %d %s\n",p1->p.id,p1->p.name,p1->age,p1->phone_number);
    return 0;
}