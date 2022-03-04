#include<stdio.h>
void main()
{
    int month_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int mm,dd,yy,i;
    printf("Enter the date in dd/mm/yyyy format");
    scanf("%2d%2d%4d",&dd,&mm,&yy);
    if(mm==2&&(yy%400==0||(yy%4==0&&yy%100!=0)))
    {
        month_day[2]=29;
    }
    for(i=0;i<67;i++)
    {
        dd=dd-1;
        if(dd==0)
        {
            mm=mm-1;
            if(mm==0)
            {
                mm=12;
                yy=yy-1;
            }
            dd=month_day[mm];
        }
    }
    printf("The day 67 days before the specified date is %d/%d/%d",dd,mm,yy);
}
