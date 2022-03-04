#include<stdio.h>
#include<math.h>
main()
{
    int g=0,c=0,i,num;
    int arr[31];
    for(i=0;i<30;i++)
    {
        printf("enter number");
        scanf("%d",&arr[i]);
        if(arr[i]<0||arr[i]>80)
        {
            printf("Invalid number");
            i=i-1;
        }
    }
    for(i=0;i<30;i++)
    {
        for(int j=0;j<30;j++)
        {
            if(arr[j]==arr[i])
                c++;
        }
        if(c>g)
        {
            g=c;
            num=arr[i];
        }
        else if(c==g)
        {
            if(arr[i]<num)
                num=arr[i];
        }
        c=0;
    }
    printf("Numbers %d occured %d times",num,g);
}
