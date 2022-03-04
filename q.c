include<stdio.h>
include<stdlib.h>
main()
{
    int i,sum=0,marks[30];
    float avg;
    printf("Enter marks of 30 studets");
    for(i=0;i<=29;i++)
        scanf("%d\n",&marks[i]);
    for(i=0;i<=29;i++)
        sum=sum+marks[i];
    avg=sum/30.0;
    printf("the average marks of 30 students is %f ",avg);

}
