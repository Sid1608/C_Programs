main()
{
    int a,b,c,choice,i;
    while(1)
    {
    printf("\nEnter 1 for addition");
    printf("\nEnter 2 for odd-even");
    printf("\nEnter 3 for printing n natural numbers");
    printf("\nEnter 4 for exit");
    printf("\n\nEnter your choice");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter two numbers");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Sum of a and b is %d",c);
        break;
    case 2:
        printf("Enter a no");
        scanf("%d",&a);
        if(a%2==0)
            printf("even-no");
        else
            printf("odd-no");
        break;
    case 3:
        printf("Enter a number");
        scanf("%d",&b);
        for(a=1;a<=b;a++)
            printf("%d,  ",a);
        break;
    case 4:
        exit(0);
    default:
        printf("invalid choice");


    }

    }


}
