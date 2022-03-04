main()
{
    int i,sum=0,n;
    printf("enter a no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
        printf("%d+",i*i);
    }
    printf("=%d",sum);

}
