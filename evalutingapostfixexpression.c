
#include <stdio.h>
#include<string.h>
int main(){
	int n,l1,l2,k=0,i,j;
	char s1[100],s2[100];
	scanf("%d", &n);

	i=0;
	while(i<n)
	{
	    gets(s1);
	    gets(s2);
	    for(l1=0;s1[l1]!='\0';l1++);
	    for(l2=0;s2[l2]!='\0';l2++);

	    if(l1==l2)
	    {
	        for(i=0;i<l1;i++)
	        {
	            for(j=0;j<l2;j++)
	            {
	                if(s1[i]==s2[j]){
	                    k++;
	                    break;
	                }
	            }
	        }


	    }
	    if(k==l1)
            printf("YES");
        else
            printf("NO");

	    i++;
	}
	return 0;
}

