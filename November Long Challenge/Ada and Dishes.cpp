#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int* arr=new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		int a=arr[0],b=arr[1],sum=0,i=2;
		while(i<=n)
		{
			sum+=min(a,b);
			//cout<<sum<<endl;
			a=max(a,b)-min(a,b);
			b=arr[i];
			i++;
			//cout<<a<<" "<<b<<endl;
		}
		sum+=max(a,b);
		cout<<sum<<endl;
	}
	return 0;
}