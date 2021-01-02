#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,d;
		cin>>n>>k>>d;
		long long int sum=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		sum=sum/k;
		if(sum<=0)
		{
			cout<<0<<endl;
		}
		else if(sum>d)
		{
			cout<<d<<endl;
		}
		else
		{
		    cout<<sum<<endl;
		}
	}
	return 0;
}