main()
{
    int calsum(int,int,int);
    int a,b,c,s;
    printf("Enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    s=calsum(a,b,c);
    printf("The required sum is %d",s);

}
int calsum(int x,int y,int z)
{
    int sum;
    sum=x+y+z;
    return(sum);
}
