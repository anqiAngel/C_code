#include <stdio.h>

int main()
{
    /* code */
    // 判断月份天数 输入某年某月输出该月份天数
    int year = 0;
    int month = 0;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (scanf("%d %d", &year, &month) != EOF)
    {
        /* code */
        if (((year % 4 == 0 & year % 100 != 0) || (year % 400 == 0)) && (month == 2))
        {
            /* code */
            printf("%d\n", days[month] + 1);
        }else
        {
            /* code */
            printf("%d\n", days[month]);
        }
    }
    printf("%d %d\n", year, month);
    return 0;
}
