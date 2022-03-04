main()
{
    int i;
    char s[110];
    printf("Enter a string  ");
    gets(s);
    printf("Performing Shift-13 coding scheme\n");
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=0&&s[i]<=47)
            s[i]=s[i];
        else if(s[i]>=48&&s[i]<=57)
            s[i]=s[i]+5;
        else if(s[i]>=58&&s[i]<=63)
            s[i]=s[i];
        else if(s[i]>=65&&s[i]<=90)
            s[i]=s[i];
        else if(s[i]>=97&&s[i]<=109)
            s[i]=s[i]+13;
        else if(i>=110&&i<=122)
            s[i]=s[i]-13;
    }
    printf("%s",s);

}
