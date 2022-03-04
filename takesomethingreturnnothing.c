void main()
{
    int x,y;
    void add(int,int);/*local declaration*/
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    add(x,y);/*actual argument;call by value*/
    getch();
}
void add(int a,int b)//formal argument//
{
    int c;
    c=a+b;
    printf("sum is %d",c);
}

