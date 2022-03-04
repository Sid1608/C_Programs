//written by siddharth akar

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n],j,k[n];
    int count=0,l=0;
    for(l=0;l<n;l++)
    {
        scanf("%d",&A[l]);
        count=0;
        for(j=0;j<l;j++)
        {
            if(A[l]=A[j])
                count+=1;
        }
        if(count==1)
        {
           k[l]=A[l];
           l+=1;
        }
    }
    for(j=0;j<l;j++)
        printf("%d",k[j]);


}
