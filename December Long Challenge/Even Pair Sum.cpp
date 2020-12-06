#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,ev,eve,odd,od;
		cin>>a>>b;
		if(a%2==0)
		{
			ev=a/2;
			odd=a/2;
		}
		else
		{
			odd=(a/2)+1;
			ev=a/2;
		}
		if(b%2==0)
		{
			eve=b/2;
			od=b/2;
		}
		else
		{
			od=(b/2)+1;
			eve=b/2;
		}
		long long int ans=(eve*ev)+(od*odd);
		cout<<ans<<endl;
	}
	return 0;
}