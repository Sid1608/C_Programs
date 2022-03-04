#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char exam[200]="Today CSE104";
    int i;
    for(i=0;exam[i]!='\0';i++)
    {
        if(exam[i]>=48 && exam[i]<=57)
        {
            if(exam[i]>=48&&exam[i]<=52)
                printf("%c",exam[i]+5);
            else
                printf("%c",exam[i]-5);
        }
        else if(exam[i]>=97 && exam[i]<=122)
        {
            if(exam[i]>=97&&exam[i]<=109)
                printf("%c",exam[i]+13);
            else
                printf("%c",exam[i]-13);
        }
        else
            printf("%c",exam[i]);
    }
}
