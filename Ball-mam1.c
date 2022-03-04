#include<stdio.h>
main()
{
    float t[25],v,u,h,g=9.81,time;
    int ht,r;
    printf("Elevation from which the ball is released ");
    scanf("%d",&ht);
    printf("bounce-reduction ratio as percentage");
    scanf("%d",&r);
    time=((2*h)/g)**0.5;
    v=(double)(2*g*h)**0.5;
    for(i=1;i<=25;i++)
    {
        u=r/100*v
        h=u**2/2*g;
        time = time+u/g+(2*h/g)**2;
        v=(2*g*h)**0.5;
        printf("bounce number %d     time %f",i,time);
    }












}
