#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    /* code */
    // char c1 = '1';
    char c1 = 'b';
    // isdigit(�ַ�) �������ַ����ط�0ֵ ���Ƿ���0
    // int ret = isdigit(c1);
    // islower(�ַ�) ��Сд��ĸ�ַ����ط�0ֵ ���Ƿ���0
    int ret = islower(c1);
    // ����
    if (c1 >= 'a' && c1 <= 'z')
    {
        /* code */
        printf("��Сд��ĸ\n");
    }
    printf("%d\n", ret);
    char str1[] = "abcdef";
    // ��str1ת��Ϊ��д�ַ���
    for (int i = 0; i < strlen(str1); i++)
    {
        /* code */
        *(str1 + i) = toupper(*(str1 + i));
    }
    printf("%s\n", str1);
    return 0;
}
