#include <stdio.h>
#include <string.h>

// 输入5 
// 输出:
// *   *
//  * *
//   *
//  * *
// *   *

// 输入6 
// 输出:
// *    *
//  *  *
//   **
//   **
//  *  *
// *    *
int main()
{
    /* code */
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        /* code */
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                /* code */
                if (i + j == n - 1)
                {
                    /* code */
                    printf("*");
                }else if (i == j)
                {
                    /* code */
                    printf("*");
                }else
                {
                    /* code */
                    printf(" ");
                }
                
            }
            printf("\n");
        }
    }

    return 0;
}
