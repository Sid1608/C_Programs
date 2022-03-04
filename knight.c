#include <stdio.h>
void main()
{
    int x,y;
    printf("enter coordinates");
    scanf("%d %d",&x,&y);
    if(x+2<8&&y+1<8)
        printf("(%d,%d)",x+2,y+1);
    if(x+2<8&&y-1>=0)
        printf("(%d,%d)",x+2,y-1);
    if(x-2>=0&&y+1<8)
        printf("(%d,%d)",x-2,y+1);
    if(x-2>=0&&y-1>=0)
        printf("(%d,%d)",x-2,y-1);
    if(x+1<8&&y+2<8)
        printf("(%d,%d)",x+1,y+2);
    if(x+1<8&&y-2>=0)
        printf("(%d,%d)",x+1,y-2);
    if(x-1>=0&&y+2<8)
        printf("(%d,%d)",x-1,y+2);
    if(x-1>=0&&y-2>=0)
        printf("(%d,%d)",x-1,y-2);
    if(x>7||y>7)
        printf("invalid move");
}

