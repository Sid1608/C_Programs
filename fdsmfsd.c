#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int a[100],t,i;
    scanf("%d",&n);
    t=0;
    while(n!=0)
    {
        a[t]=n%2;
        t++;
        n=n/2;
    }
    for(i=t-1;i>=0;i--)
        printf("%d",a[i]);

    return 0;
}





