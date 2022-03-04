main()
{
    int i,p,n;
    float r,si;
    i=1;
    while(i<=3)
    {
        printf("Enter p,n,r");
        scanf("%d%d%f",&p,&n,&r);
        si=p*n*r/100;
        printf("simple interest is %f",si);
        i++;

    }


}
