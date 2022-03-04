main()
{
    int i,sum=0,n;
    printf("enter a no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*2;
        printf("%d+",i*2);
    }
    printf("=%d",sum);

}
