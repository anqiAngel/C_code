#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>

void num_add(int* num){
    (*num)++;
}

int main()
{
    /* code */
    int num = 0;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        num_add(&num);
        printf("%d\n",num);
    }
    return 0;
}
