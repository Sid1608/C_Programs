#include<stdio.h>
int main()
{
    int i,j;
    float sum35=0,sum30=0,mean;
    for(i=35;i>0;i--)
    {
        sum35=(float)1/(2+sum35);
    }
    sum35=1+sum35;
    printf("%f\n",sum35);
    for(i=29;i>0;i--)
    {
        sum30=(float)1/(2+sum30);
    }
    sum30=1+sum30;
    printf("%f\n",sum30);
    mean=(sum35+sum30)/2;
    printf("The mean of the two values is %f",mean);
}

