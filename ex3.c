/* The marks obtained by a student in 5 different subjects are input through the keyboard.
 The student gets a division as per the following rules:
 Percentage above or equal to 60 - First division
 Percentage between 50 and 59 - Second division
 Percentage between 40 and 49 - Third division
  Percentage less than 40 - Fail
  Write a program to calculate the division obtained by the student.*/
main()
{
    int a[5],per,i,sum=0;
    printf("enter marks obtained in five different subject");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
        sum=sum+a[i];

    per=sum/5;
    if(per>=60)
        printf("first division");
    else
    {
        if(per>=50&&per<=59)
            printf("second division");
        else
        {
            if(per>=40&&per<=49)
                printf("third division");
            else
                printf("fail");

        }
    }











}
