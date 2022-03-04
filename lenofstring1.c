main()
{
    int i;
    char s[20];
    printf("Enter a string");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("%d",i);

}
