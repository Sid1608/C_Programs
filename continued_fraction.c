main()
{
    float x,y;
    float depth36(void);
    float depth37(void);
    float avg;
    x=depth36();
    y=depth37();
    avg=(x+y)/2.0;
    printf("\nthe mean of two values is %f",avg);
}
float depth36(void)
{
    int i;
    float num,frac,pi_1;
    frac=0.0;
    for(i=35;i<=1;i--)
    {
        num=(float)1/i;
        frac=1/(num+frac);
    }

    pi_1=2+2/(num+frac);
    printf("The value of pi one is %f ",pi_1);
    return(pi_1);
}

float depth37(void)
{
    int i;
    float NUM,FRAC,pi_2;
    FRAC=0.0;
    for(i=37;i<=1;i--)
    {
        NUM=1/i;
        FRAC=1/(NUM+FRAC);
    }
    pi_2=2+2/(NUM+FRAC);
    printf("The value of pi two is %f ",pi_2);
    return(pi_2);
}


