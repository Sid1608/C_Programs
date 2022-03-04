int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
        return(i);
}
main()
{
    char s="computer";
    length(s);
    getch();
}
