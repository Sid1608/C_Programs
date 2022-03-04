main()
{
    int a[4]={34,45,65,45},i,smallest;
    smallest=a[0];
    for(i=0;i<=4;i++)
    {
        if (a[i]<smallest)
            smallest=a[i];
    }
    printf("The smallest no in a array is %d",smallest);


}
