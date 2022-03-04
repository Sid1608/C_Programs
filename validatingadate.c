#include<stdio.h>
#include<stdlib.h>
main()
{
    int dd=29,mm=2,yyyy=2016;
    int valid;
    int leapYr;
    if(yyyy<1900||yyyy>2100||dd<1/dd>31)
        valid=0;
    else
        switch(mm)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            valid=1;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            valid=dd<31;
            break;
        case 2:
            leapYr=(yyyy%4==0&&yyyy%100!=0)||(yyyy%400==0);
            valid=(dd<29)||(leapYr&&dd<30);
            break;
        default: valid=0;




    }
    if(valid)
        printf("Date %d-%d-%d is valid date",dd,mm,yyyy);
    else
        printf("Date %d-%d-%d is invalid date",dd,mm,yyyy);
    getch();

}
