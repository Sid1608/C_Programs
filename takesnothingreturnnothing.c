void main()
{
    void add(void);
    add();
    getch();
}
void add()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}
