main()
{
    int r,x,n,rev;
    printf("Enter a numbers");
    scanf("%d",&n);
    rev=0;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    printf("The reverse of a no is %d",rev);


}
