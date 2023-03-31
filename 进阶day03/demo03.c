#include <stdio.h>

// 杨氏矩阵
// 题目内容:有一个数字矩阵,矩阵的每行从左到右是递增的,矩阵从上到下是递增的
// 请编写程序在这样的矩阵中查找某个数字是否存在
// 要求时间复杂度小于O(N)
int find_num1(int matrix[3][3], int r, int c, int key)
{
    // 行
    int x = 0;
    // 列
    int y = c - 1;
    while (x < r && y >= 0)
    {
        /* code */
        if (matrix[x][y] < key)
        {
            /* code */
            // 去掉一行
            x++;
        }
        else if (matrix[x][y] > key)
        {
            /* code */
            // 去掉一列
            y--;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

// 改进版返回行列结果
int find_num2(int matrix[3][3], int key, int *px, int *py)
{
    // 行
    int x = 0;
    // 列
    int y = *py - 1;
    while (x < *px && *py >= 0)
    {
        /* code */
        if (matrix[x][y] < key)
        {
            /* code */
            // 去掉一行
            x++;
        }
        else if (matrix[x][y] > key)
        {
            /* code */
            // 去掉一列
            y--;
        }
        else
        {
            *px = x + 1;
            *py = y + 1;
            return 1;
        }
    }
    return 0;
}

int main()
{
    /* code */
    // 杨氏矩阵
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // 时间复杂度是最坏的情况下的复杂度 1 2 7 O(1) N 2N 3N O(N)  N^2 2N^2 3N^2 O(N^2)
    // 在杨氏矩阵matrix中找7 每一次找右上角或左下角元素
    int key = 0;
    int x = 3;
    int y = 3;
    printf("请输入要找的数字>:");
    scanf("%d", &key);
    int ret = find_num1(matrix, 3, 3, key);
    int ret1 = find_num2(matrix, key, &x, &y);
    if (ret == 1)
    {
        /* code */
        printf("找到了\n");
    }
    else
    {
        printf("没找到\n");
    }
    if (ret1 == 1)
    {
        /* code */
        printf("找到了\n");
        printf("在第%d行第%d列\n",x,y);
    }
    else
    {
        printf("没找到\n");
    }

    return 0;
}
