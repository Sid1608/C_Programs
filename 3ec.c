/*Write a program to add first seven terms of the following series using a for loop:

1 1!
2 2!
3 3!
……
*/
main()
{
    int i,num,deno=1;
    float sum=0.0;
    for(i=1;i<=7;i++)
    {
        num=i;
        deno=deno*i;
        sum=sum+(num/deno);
    }
    printf("the value of sum is %f",sum);
}
