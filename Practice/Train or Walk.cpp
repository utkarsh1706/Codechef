#include <bits/stdc++.h>
using namespace std;
int direct(int* arr,int n,int a,int b,int p)
{
	int ans=abs(arr[a-1]-arr[b-1])*p;
	return ans;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,c,d,p,q,y;
		cin>>n>>a>>b>>c>>d>>p>>q>>y;
		int* arr=new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int dist1,dist2;
		dist1=direct(arr,n,a,b,p);
		int z=abs(arr[a-1]-arr[c-1])*p;
		if(z>y)
		{
			dist2=INT_MAX;
		}
		else if(z<=y)
		{
			dist2=z+(abs(arr[c-1]-arr[d-1])*q)+(abs(arr[d-1]-arr[b-1])*p)+(y-z);
		}
		cout<<min(dist2,dist1)<<endl;
	}
	return 0;
}