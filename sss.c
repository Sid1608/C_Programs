main()
{
    int yyyy;
    printf("Enter year");
    scanf("%d",%yyyy);
    if((yyyy%4==0&&yyyy%100!==0)||yyyy%400==0)
        printf("Given year is a leap_Year");
    else
        printf("The given year is not leap_year");
}
