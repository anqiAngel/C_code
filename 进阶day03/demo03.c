#include <stdio.h>

// ���Ͼ���
// ��Ŀ����:��һ�����־���,�����ÿ�д������ǵ�����,������ϵ����ǵ�����
// ���д�����������ľ����в���ĳ�������Ƿ����
// Ҫ��ʱ�临�Ӷ�С��O(N)
int find_num1(int matrix[3][3], int r, int c, int key)
{
    // ��
    int x = 0;
    // ��
    int y = c - 1;
    while (x < r && y >= 0)
    {
        /* code */
        if (matrix[x][y] < key)
        {
            /* code */
            // ȥ��һ��
            x++;
        }
        else if (matrix[x][y] > key)
        {
            /* code */
            // ȥ��һ��
            y--;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

// �Ľ��淵�����н��
int find_num2(int matrix[3][3], int key, int *px, int *py)
{
    // ��
    int x = 0;
    // ��
    int y = *py - 1;
    while (x < *px && *py >= 0)
    {
        /* code */
        if (matrix[x][y] < key)
        {
            /* code */
            // ȥ��һ��
            x++;
        }
        else if (matrix[x][y] > key)
        {
            /* code */
            // ȥ��һ��
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
    // ���Ͼ���
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // ʱ�临�Ӷ����������µĸ��Ӷ� 1 2 7 O(1) N 2N 3N O(N)  N^2 2N^2 3N^2 O(N^2)
    // �����Ͼ���matrix����7 ÿһ�������Ͻǻ����½�Ԫ��
    int key = 0;
    int x = 3;
    int y = 3;
    printf("������Ҫ�ҵ�����>:");
    scanf("%d", &key);
    int ret = find_num1(matrix, 3, 3, key);
    int ret1 = find_num2(matrix, key, &x, &y);
    if (ret == 1)
    {
        /* code */
        printf("�ҵ���\n");
    }
    else
    {
        printf("û�ҵ�\n");
    }
    if (ret1 == 1)
    {
        /* code */
        printf("�ҵ���\n");
        printf("�ڵ�%d�е�%d��\n",x,y);
    }
    else
    {
        printf("û�ҵ�\n");
    }

    return 0;
}
