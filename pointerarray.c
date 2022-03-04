main()
{
    int i,*p,s[5];
    p=&s[0];
    for(i=0;i<=4;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<=4;i++)
        printf("%d",*(p+i));
    getch();
}
