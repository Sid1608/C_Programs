/*Write a program to determine whether a number is prime or not.
 A prime number is one,
 which is divisible only by 1 or itself.
*/
main()
{
    int i,num;
    printf("enter a number");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            printf("not a prime no");
            break;
        }

    }
    if(i==num)
        printf("prime number");

}
