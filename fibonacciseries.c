main()
{
    int a,b,c,n,i;
    printf("Enter a number");
    scanf("%d",&n);
    a=1;
    b=1;
    printf("%d %d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }


}
