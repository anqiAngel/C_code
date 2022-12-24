#include <stdio.h>
#include <string.h>

struct people
{
    /* data */
    // 结构体成员 声明变量 类型 + 变量名
    int id;
    char name[20];
}p1={1,"张三"};

struct student
{
    /* data */
    struct people p; // 可以嵌套结构体
    int age;
    char phone_number[20];
}stu1={{2,"李四"},18,"10086"}; // 可以立刻创建结构体变量并初始化


int main()
{
    /* code */
    // 结构体用{}初始化 可以嵌套
    struct student stu2 = {{3,"王五"},18,"10010"};
    struct student* p1 = &stu2;
    // 结构体成员的访问 结构体变量名(对象名).结构体成员变量名
    printf("%d %s %d %s\n",stu2.p.id,stu2.p.name,stu2.age,stu2.phone_number);
    // 指针访问 指针->结构体成员名
    printf("%d %s %d %s\n",p1->p.id,p1->p.name,p1->age,p1->phone_number);
    return 0;
}