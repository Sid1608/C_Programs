#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char str1[10]="a",str2[10]="b";
    char *p=str1,*r=str2;
    printf("%s ",*p);
    printf("%s ",str2);
    for(i=0;i<4;i++)
    {
        strcat(*r,*p);
        printf("%s ",*r);
        p++;
        r++;
    }

    return 0;
}
