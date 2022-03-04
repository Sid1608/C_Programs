main()
{
    int a[4],i,smallest;
    for(i=0;i<=3;i++)
        scanf("%d",&a[i]);

    smallest=0;
    for(i=0;i<=3;i++)
    {
        if (a[i]<a[smallest])
            smallest=i;
    }
    printf("The smallest no in a array is located at  %d",smallest);


}
