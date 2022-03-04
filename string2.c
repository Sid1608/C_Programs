main()
{
    char s[20];
    int i;
    printf("Enter your name ");
    scanf("%s",s);
    /*for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);

    }*/
    /*printf("%s",&s[0]);*/
    puts(&s[0]);
    strrev("siddharth");
    getch();
}
