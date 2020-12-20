#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	ll mini=INT_MAX;
	ll* arr=new ll[m];
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin>>x;
		mini=min(mini,x);
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
	}
	ll swaps=0;
	sort(arr,arr+m);
	for (int i = 0; i < m; ++i)
	{
		if(mini>arr[i])
		{
			swaps+=n;
		}
	}
	cout<<swaps<<endl;
	return 0;
}