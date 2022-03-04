#include<stdio.h>
main()
{
    int i,j;
    float sum37=0,sum36=0;
    for(i=35;i>0;i--)
    {
        sum36=(float)1/((float)1/i+sum36);
    }
    sum36+=1;
    printf("%f\n",sum36);
    for(i=36;i>0;i--)
    {
        sum37=(float)1/((float)1/i+sum37);
    }
    sum37+=1;
    printf("%f\n",sum37);
    printf("%f",(float)(sum36+sum37)/2);

}
