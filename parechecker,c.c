

#include <iostream>

using namespace std;

int main() {
	int t,n,x=0,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(i%2==0||i%3==0||i%5==0||i%7==0||i%11==0||i%13==0||i%17==0||i%19==0)
				x++;
		}
		cout<<x;
	}
}

