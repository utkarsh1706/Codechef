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
		int d;
		int m=INT_MAX,no;
		for(int i=0;i<n;i++)
		{
			cin>>d;
			if(k%d==0)
			{
				int rem=k/d;
				if(rem<m)
				{
					m=rem;
					no=d;
				}
			}
		}
		if(m==INT_MAX)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<no<<endl;
		}
	}
	return 0;
}