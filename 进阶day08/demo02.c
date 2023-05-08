#include <stdio.h>

int main()
{
    /* code */
    FILE *fp = fopen("test1.txt","w");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        fprintf(fp,"%s %s %s %d\n",__FILE__,__DATE__,__TIME__,i);
    }
    fclose(fp);
    fp = NULL;
    return 0;
}
