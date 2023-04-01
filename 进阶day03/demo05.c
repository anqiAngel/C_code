#include <stdio.h>
#include <string.h>

// �ж�str2�ǲ�����str1�����õ���
// ����
int is_string_rotate1(char *str1, char *str2)
{
    if (strlen(str1) < strlen(str2) || strlen(str1) > strlen(str2))
    {
        /* code */
        return 0;
    }
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        /* code */
        char tmp = *str1;
        for (int j = 0; j < len - 1; j++)
        {
            /* code */
            *(str1 + j) = *(str1 + j + 1);
        }
        *(str1 + len - 1) = tmp;
        if (strcmp(str1, str2) == 0)
        {
            /* code */
            return 1;
        }
    }
    return 0;

}

// �ж�str2�ǲ�����str1�����õ���
// �Ӵ� str2��str1str1���Ӵ���һ����str1�����õ���
int is_string_rotate2(char *str1, char *str2)
{
    // ��str1��׷��1��str1
    strncat(str1,str1,strlen(str1));
    // �ж�str2�ǲ���str1str1���Ӵ�
    if (strstr(str1,str2))
    {
        /* code */
        return 1;
    }
    return 0;
    
}

int main()
{
    /* code */
    char str1[] = "ABCDE";
    char str2[] = "ABCDE";
    int res = is_string_rotate1(str1,str2);
    if (res)
    {
        /* code */
        printf("��str1�����õ���\n");
    }else
    {
        /* code */
        printf("����str1�����õ���\n");
    }
    int res1 = is_string_rotate2(str1,str2);
    if (res1)
    {
        /* code */
        printf("��str1�����õ���\n");
    }else
    {
        /* code */
        printf("����str1�����õ���\n");
    }
    return 0;
}
