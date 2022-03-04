#include<stdio.h>
main()
{
    char str[50],ch;
    int i,l;
    printf("Enter a string");
    gets(str);
    for(l=0;str[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;

    }
    printf("%s",str);

}
