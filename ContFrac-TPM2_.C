#include<stdio.h>
int main()
{
    int i,j;
    float sum50=0,sum51=0,mean;
    for(i=48;i>0;i--)
    {
        sum50=(float)1/((6+(i-1)*4)+sum50);
    }
    sum50=1+2/(1+sum50);
    printf("%f\n",sum50);
    for(i=49;i>0;i--)
    {
         sum51=(float)1/((6+(i-1)*4)+sum51);
    }
    sum51=1+2/(1+sum51);
    printf("%f\n",sum51);
    mean=(float)(sum50+sum51)/2;
    printf("The mean of two value is %f",mean);

}
