#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char exam[200]="Gur Fnyg Znepu";
    int i;
    for(i=0;exam[i]!='\0';i++)
    {
        if(exam[i]>=65 && exam[i]<=90)
        {
            if(exam[i]>=65 && exam[i]<=77)
                printf("%c",exam[i]+13);
            else
                printf("%c",exam[i]-13);
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

