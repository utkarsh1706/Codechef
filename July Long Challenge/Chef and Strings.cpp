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
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int sum=0;
		for(int i=0;i<n-1;i++)
		{
			sum+=(abs(arr[i+1]-arr[i])-1);
		}
		cout<<sum<<endl;
	}
	return 0;
}