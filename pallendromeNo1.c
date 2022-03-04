main()
{
    int i,x,n,r,rev;
    printf("Enter a number");
    scanf("%d",&n);
    x=n;
    rev=0;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;

    }

    if(n==rev)
        printf("The no is pallindrome");
    else
        printf("The no is not a pallindrome number");
}
