#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
    /* code */
    // ���ļ� �ɹ������ļ�ָ�� ��ʧ�ܷ���NULL
    FILE *fp = fopen("./demo11.c", "r");
    // ��ӡ������
    if (!fp)
    {
        /* code */
        printf("������:%s\n",strerror(errno)); // No such file or directory
    }else
    {
        /* code */
        printf("û��\n");
    }
    // perror��ӡ���� 
    //��������ת��Ϊ������Ϣ����ӡ
    perror("perror��ӡ�Ĵ�����");
    fclose(fp);
    fp = NULL;
    return 0;
}
