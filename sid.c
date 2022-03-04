main()
{
    int x=5,*j;
    j=&x;
    printf("%d\n%u\n",x,j);
    printf("%d\n%u\n",*j,&x);
    printf("%u",*&j);
}
