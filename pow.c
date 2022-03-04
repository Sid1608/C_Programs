main()
{
    int x,y,i,num;
    printf("enter two no");
    scanf("%d%d",&x,&y);
    num=x;
    for(i=1;i<=y-1;i++)
    {
        num=num*x;
    }
    printf("x^y=%d",num);
}
