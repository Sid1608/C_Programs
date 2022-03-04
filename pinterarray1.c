main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
    getch();

}
void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}
void display(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        printf("%d",*(p+i));
}
sort(int *p)
{
    int round,t,i;
    for(round=0;round<=4;round++)
    {
        for(i=0;i<=4-round;i++)
            if(*(p+i)>*(p+i+1))
        {
            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
        }




    }
}
