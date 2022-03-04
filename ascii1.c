/*Write a program to print all the ASCII values and their equivalent characters using a while loop.
 The ASCII values vary from 0 to 255*/
 #include<stdio.h>
#include<conio.h>
main()
{
    int i=0;
    char s[1000];
    printf("Enter a string  ");
    gets(s);
    for(i=0;i<=1000;i++)
    {
        if(s[i]>=0&&s[i]<=47)
            printf("%c",s[i]);
        else if(s[i]>=48&&s[i]<=57)
            printf("%c",s[i]+5);
        else if(s[i]>=58&&s[i]<=63)
            printf("%c",s[i]);
        else if(s[i]>=65&&s[i]<=90)
            printf("%c",s[i]);
        else if(s[i]>=97&&s[i]<=109)
            printf("%c",s[i]+13);
        else if(i>=110&&i<=122)
            printf("%c",s[i]-13);


    }
    printf()





}
