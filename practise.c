#include<stdlib.h>
#include <stdio.h>
int isPrime(int);

int main(){
	int t,i,n,a;
	char s[n];
	scanf("%d",&t);
	i=0;
	while(i<t)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%c",&s[i]);
		}
		for(i=0;i<n;i++)
		{
			a=(int)s[i];
			if(!isPrime(a))
			{
				s[i]=a;
				//printf("%c",a);
				continue;
			}
			else if(!isPrime(a-1))
			{
				s[i]=a-1;
				//printf("%c",a-1);
				continue;
			}
			else if(!isPrime(a+1))
			{
				s[i]=a+1;
				//printf("%c",a+1);
				continue;
			}
			else if(!isPrime(a-2))
			{
				s[i]=a-2;
				//printf("%c",a-2);
				continue;
			}
			else if(!isPrime(a+2))
			{
				s[i]=a+2;
				//printf("%c",a+2);
				continue;
			}

		}
		printf("%s",s);
		i++;
	}
}
int isPrime(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%2==0)
		{
			return 0;
			break;
		}
		else
			continue;
		return 1;
	}
}

