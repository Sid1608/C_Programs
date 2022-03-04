#include<stdio.h>
void main()
{
    int a,b,i,yy,dd,mm,m,y,d,t=0,c=0;
    printf("Enter numbers\n");
    scanf("%d %d",&a,&b);
    int arr[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=a;;)
    {
        yy=i/449;
        mm=(i%449)/37;
        dd=((i%449)%37);
        if(yy<=0||mm<=0||dd<=0||dd>=31||mm>=12)
        {
            printf("Invalid Input,Enter Number again\n");
            scanf("%d",&i);
            continue;
        }
        if(yy%400==0||(yy%4==0&&yy%100!=0))
            arr[1]=29;
        if(dd>arr[mm-1])
        {
            printf("Invalid Input,Enter Number again\n");
            scanf("%d",&i);
            continue;
        }
        printf("%d is valid date\n",i);
        c++;
        if(i<t||t==0)
        {
            t=i;
            d=dd;
            m=mm;
            y=yy;
        }
        if(c==1)
        {
            i=b;
            continue;
        }
        else
            break;
    }
        printf("%d-%d-%d",d,m,y);
}
