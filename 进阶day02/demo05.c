#include <stdio.h>
#include <stdlib.h>

struct student
{
    /* data */
    int id;
    char name[20];
};

// qsort()���ͱȽϺ���
int cmp_int(const void* e1,const void* e2){
    return (*(int*)e1 - *(int*)e2);
}

// qsort()�ṹ��ȽϺ���
int cmp_struct(const void* e1,const void* e2){
    // �Ƚ�id
    // return (((struct student*)e1)->id - ((struct student*)e2)->id);
    // �Ƚ�name
    return (((struct student*)e1)->name - ((struct student*)e2)->name);
}

int main(int argc, char const *argv[])
{
    /* code */
    int arr[10] = {0, 9, 2, 3, 4, 5, 4, 7, 8, 9};
    // qsort()����
    qsort(arr,10,sizeof(arr[0]),cmp_int);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");
    // struct student s_arr[3] = {{30, "����"}, {20,"����"}, {10,"����"}};
    struct student s_arr[3] = {{30, "abc"}, {20,"bcd"}, {10,"cde"}};
    qsort(s_arr,3,sizeof(s_arr[0]),cmp_struct);
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("%s ",s_arr[i].name);
    }
    printf("\n");
    return 0;
}
