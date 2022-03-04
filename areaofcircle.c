main()
{

    void Area(int);
    int r;
    printf("Enter the radius of cirle");
    scanf("%d",&r);
    Area(r);
    getch();

}
Area(int a)
{
    float A;
    A=3.14*(a*a);
    printf("the area of circle is %f",A);

}
