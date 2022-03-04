#include<stdio.h>
#include<math.h>
int main(){
	float num=1,den=1,final=0.5,dig;
	int l,m=3;
	for(int i=1;i<=16;i++)
        {
            num=1;den=1;
            for(int j=1;j<=i;j++)
            {
                den=den*2*j;
            }
            l=1;
            for(int k=1;k<=i;k++){

                num=num*l;
                l=l+2;
            }
            dig=num/(den*m*pow(2,m));
            final=final+dig;
            m=m+2;
        }
        printf("%f",final*6);
}
