#include<stdlib.h>
#include <stdio.h>
#include<math.h>
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
			a=s[i];
			if(isPrime(a))
			{
				s[i]=(char)a;
				//printf("%c",a);
				continue;
			}
			else if(isPrime(a-1))
			{
				s[i]=(char)a-1;
				//printf("%c",a-1);
				continue;
			}
			else if(isPrime(a+1))
			{
				s[i]=(char)a+1;
				//printf("%c",a+1);
				continue;
			}
			else if(isPrime(a-2))
			{
				s[i]=(char)a-2;
				//printf("%c",a-2);
				continue;
			}
			else if(isPrime(a+2))
			{
				s[i]=(char)a+2;
				//printf("%c",a+2);
				continue;
			}

		}
		printf("%s",s);
		i++;
		return 0;
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

