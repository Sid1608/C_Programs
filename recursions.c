//function calling itself is called recursion//
//this code is basically the sum of natural no//
main()
{
    int k;
    k=fun(3);
    printf("%d",k);
    getch();

}
int fun(int a)
{
    int s;
    if(a==1)
        return(a);
    s=a+fun(a-1);
    return(s);
}
