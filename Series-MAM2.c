#include<std>
main()
{
    int i,num=1,n;
    float sum=0,deno=1,pi,den;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        num=1;
        deno=1;
        num=num*(2*i+1);
        deno=deno*(2*i);
        den=(2*i+1)*pow(2,2*i+1);
        sum=sum +(num/(deno*den));
    }
    printf("The sum of series %f",sum);
    pi=6*(0.5+sum);
    printf("The value pi is %f",pi);

}
