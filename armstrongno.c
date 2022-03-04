main()
{
    int n,s,r,x;
    printf("Armstong numbers are\n");
    for(n=1;n<=500;n++)
    {
        s=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
        {
              printf("%d\n",n);
        }



    }



}
