#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,sum=0,sumo=0,steps=0;
		cin>>n>>m;
		vector<ll>v;
		vector<ll>b;
		for (ll i = 0; i < n; ++i)
		{
			ll x;
			cin>>x;
			sum+=x;
			v.push_back(x);
		}
		for (ll i = 0; i < m; ++i)
		{
			ll x;
			cin>>x;
			sumo+=x;
			b.push_back(x);
		}
		if(sum>sumo)
		{
			cout<<0<<endl;
			continue;
		}
		sort(v.begin(),v.end());
		sort(b.begin(),b.end());
		ll i=0,j=m-1;
		while(sum<=sumo and i<=n-1 and j>=0)
		{
			sum-=v[i];
			sumo+=v[i];
			sum+=b[j];
			sumo-=b[j];
			i++;
			j--;
			steps++;
		}
		if(sum<=sumo)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<steps<<endl;
		}
	}
	return 0;
}