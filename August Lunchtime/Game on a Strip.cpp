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
		int k=0,i=0,maxi=INT_MIN;
		while(i<n)
		{
			if(arr[i]==0)
			{
				int j=i;
				k++;
				int sum=0;
				while(arr[j]!=1)
				{
					sum++;
					i++;
					j++;
				}
				maxi=max(maxi,sum);
			}
			else
			{
				i++;
			}
		}
		if(k==1 and maxi%2)
		{
			cout<<"Yes"<<endl;
		}
		else if(k>1 and maxi%2==0 and maxi<(maxi+1)/2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}