#include<stdio.h>
#include<math.h>
void main()
{
    float r,h,g=9.81,v;
    printf("enter the loss of kinetic energy");
    scanf("%f",&r);
    printf("Enter the height from which ball falls");
    scanf("%f",&h);
    v=sqrt(2*g*h);
    for(int i=1;i<=3;i++)
    {
        v=v*pow(((100-r)/100),0.5);
    }

    float t=h/v;
    float s=v*t-0.5*g*t*t;
    printf("The height at which ball colledes is %f",s);

}
