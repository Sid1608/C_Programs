void main()
{
    int s,x,y;
    int add(int,int);
    printf("enter two no");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("sum is %d",s);
    getch();
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}

