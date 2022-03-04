#include<stdio.h>
int main()
{
    int i,num;
    float ei=1.0,n=1.0;

    printf("enter");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        n=n*i;
        ei=ei+1.0/n;

    }
    printf("%0.6f",ei);
}
