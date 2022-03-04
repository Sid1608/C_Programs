main()
{
    int choice,a,b,s;
    printf("\n1.Addition");
    printf("\n2.odd-even");
    printf("\n3.printing N numbers");
    printf("\n4.Exit");
    printf("\n\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter two choice");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("\n Sum is %d",s);
        break;
    case 2;
        printf("Enter a number");
        scanf("%d",&a);
        if(a%2==0)
            printf("even number");
        else
            printf("odd number");
        break;
     case 3;
        printf("enter a number");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
            printf("%d",b);
        break;
    case 4;
        exit(0);
    default;
        printf("Invalid Choice");
        }
    getch();

}
