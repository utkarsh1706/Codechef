#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int sum=0,total=0,ans=n+1,j=n+1;
		while(n--)
		{
			long long int d;
			cin>>d;
			sum=d+sum-k;
			total++;
			if(sum<0)
			{
				ans=min(ans,total);
                sum=0;
            }   
		}
		if(ans!=j)
		{
			cout<<ans<<endl;
			continue;
		}
		if(k!=0)
			cout<<(sum/k)+total+1<<endl;

	}
	return 0;
}