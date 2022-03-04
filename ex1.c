main()
{
    int cur_yr,yoj,noy,bonus=2500;
    printf("Enter current year and the year in which the employee joined the organization");
    scanf("%d %d",&cur_yr,&yoj);
    noy=cur_yr-yoj;
    if(noy>3)
        printf("you got bonus of %d",bonus);

}
