main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>90)
        printf("Grade A");
    else if(marks>80)
        printf("grade B");
    else if(marks>70)
        printf("Grade-c");
    else
        printf("Grade-d");
}
