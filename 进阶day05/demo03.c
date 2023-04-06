#include <stdio.h>
#include <string.h>

struct A
{
    /* data */
    char c1;
    int i;
    char c2;
};

struct B
{
    /* data */
    char c1;
    char c2;
    int i;
};

struct C
{
    /* data */
    char c1;
    double d1;
    int i;
};

int main(int argc, char const *argv[])
{
    /* code */
    struct A a1 = {0};
    struct B b1 = {0};
    struct C c1 = {0};
    printf("%d\n",sizeof(a1)); // 12
    printf("%d\n",sizeof(b1)); // 8
    printf("%d\n",sizeof(c1)); // 24
    return 0;
}
