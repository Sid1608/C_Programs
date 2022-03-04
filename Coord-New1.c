#include<stdio.h>
#include<conio.h>
void main()
{
    int x[8],y[8],x1,y1;
    printf("Enter the coordinates of knight.\n");
    scanf("%d %d",&x1,&y1);
    if((x1<0 && x1>8)&&(y1<0 && y1>8)){
            printf("Enter the valid coordinates");
            goto here;
     }
    int i;
    if((x1>0&&x1<8)&&(y1<0&&y1>8))
    {
        x[0]=x1-2; y[0]=y1-1;
        x[1]=x1-2; y[1]=y1+1;
        x[2]=x1-1; y[2]=y1+2;
        x[3]=x1-1; y[3]=y1-2;
        x[4]=x1+1; y[4]=y1+2;
        x[5]=x1+1; y[5]=y1+-2;
        x[6]=x1+2; y[6]=y1+1;
        x[7]=x1+2; y[7]=y1-1;
    }
    for(i=0;i<8;i++)
    {
        if((x[i]>=0&&x[i]<=8)&&(y[i]>=0&&y[i]<=8))
        {
            printf("Co-ordinate attacked by knights are:%d,%d.\n",x[i],y[i]);
        }
    }

    here:;

}
