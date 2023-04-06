#include <stdio.h>

// 定义一个书结构 声明一个结构体
struct Book
{
    /* data */
    char name[20];
    char id[20];
    int price;
} book1 = {"红楼梦", "3", 20}, book2 = {"水浒传", "4", 20}; // 声明结构体变量并初始化

// 匿名结构体 没有结构体标签名字 不完全声明结构体 只能使用一次
struct
{
    /* data */
    int id;
    char name[20];
} s;

// 匿名结构体指针
struct
{
    /* data */
    int id;
    char name[20];
} *ps;

// 结构体的引用
struct A
{
    /* data */
    int i;
    char c;
};

struct B
{
    /* data */
    char c;
    struct A sa;
    double d;
};

// 结构体的自引用 在结构体里包含同类型的指针 结点能够找到同类型的下一个结点
// 链表结点定义
struct N
{
    /* data */
    // 数据域
    int i;
    // 死循环不可以
    // struct N sn;
    // 地址域
    struct N *sn;
};

// 也不可以 必须先有类型再重命名
// typedef struct
// {
//     /* data */
//     int data;
//     Node *next;
// } Node;

// 必须先有类型再重命名
typedef struct Node
{
    /* data */
    int data;
    struct Node *next;
} Node;

int main()
{
    /* code */
    // 结构体初始化
    struct Book book3 = {"西游记", "1", 20};
    struct Book book4 = {"三国演义", "2", 20};
    // ps = &s; // 会出现问题 编译器会将他们理解为不同的类型
    struct B b1 = {'A', {1, 'B'}, 0.5};
    printf("%c %d %c %lf", b1.c, b1.sa.i, b1.sa.c, b1.d);
    return 0;
}
