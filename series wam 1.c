#include <stdio.h>
void main()
{
float e,fact=1,sum=1;
for (float i=2;i<=500;i++)
    {
        sum=sum+1/(fact);
        fact=fact*i;
    }

e=sum;
printf("the value of e is %f",e);
}
