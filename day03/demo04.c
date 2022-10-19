#include <stdio.h>
#include <string.h>


struct student{
    int id;
    char name[20];
    int age;
    char sex[10];
};

int main()
{
    /* code */
    struct student s1 ={123,"史安琪",22,"男"};
    printf("1:%d %s %d %s\n",s1.id,s1.name,s1.age,s1.sex);
    struct student* pa = &s1;
    printf("2:%d %s %d %s\n",(*pa).id,(*pa).name,(*pa).age,(*pa).sex);
    printf("3:%d %s %d %s\n",pa->id,pa->name,pa->age,pa->sex);
    return 0;
}
