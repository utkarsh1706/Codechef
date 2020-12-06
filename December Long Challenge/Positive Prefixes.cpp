#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int* arr=new int[n+1];
		for (int i = 0; i < n; ++i)
		{
			arr[i]=i+1;
		}
		if(2*k<=n)
		{
			int p=0;
			while(k--)
			{
				arr[2*p+1]=-1*arr[2*p+1];
				p++;
			}
			for(int j=1;j<n-(2*p)+1;j++)
			{
				arr[2*p-1+j]=-1*arr[2*p-1+j];
			}
		}
		else
		{
			int diff=n-k;
			int i=0;
			while(diff--)
			{
				arr[2*i+1]=-1*arr[2*i+1];
				i++;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}