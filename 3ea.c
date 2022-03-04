main()
{
    int i,n;
    for(n=1;n<=300;n++)
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
                printf("Not a prime no");
                break;

        }
        if(n==i)
            printf("prime no");



    }
}
