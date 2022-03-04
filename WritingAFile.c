#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE *fp;
    char s[]="hello students";
    fp=fopen("f3.txt","w");
    if(fp==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);

}
