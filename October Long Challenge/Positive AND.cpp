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
		if(n%2==0 and (n&2)==0)
		{
			cout<<-1<<endl;
			continue;
		}
		if(n%2!=0 and ((n-1)&2==0))
		{
			cout<<-1<<endl;
			continue;
		}
		stack<int>sta;
		vector<int>v;
		int ans=1,k=n;
		while(ans<=n)
		{
			ans=ans*2;
		}
		ans=ans/2;
		if(n%2!=0)
		{
		int copyans=ans,copyk=n;
		while(k>=ans and ans!=1 and k!=0)
		{
			if(ans==(k))
			{
				sta.push(k);
				k=(k/2)-1;
				ans=ans/4;
				continue;
			}
			sta.push(k);
			k--;
		}
			ans=copyans/2;
			copyans--;
			while(copyans>=ans and ans!=1 and copyans!=0)
			{
			if(ans==copyans)
			{
				v.push_back(copyans);
				copyans=(copyans/2)-1;
				ans=ans/4;
				continue;
			}
			v.push_back(copyans);
			copyans--;
			}
		}
		else
		{
			cout<<n<<" ";
			int copyans=ans+1,copyk=n;
			k--;
			while(k>=ans and ans!=1 and k!=0)
			{
				if(ans==(k))
				{
					sta.push(k);
					k=(k/2)-1;
					ans=ans/4;
					continue;
				}
				sta.push(k);
				k--;
			}
			ans=copyans/2;
			copyans-=2;
			while(copyans>=ans and ans!=1 and copyans!=0)
			{
				if(ans==copyans)
				{
					v.push_back(copyans);
					copyans=(copyans/2)-1;
					ans=ans/4;
					continue;
				}
				v.push_back(copyans);
				copyans--;
			}
		}
		
		while(!sta.empty())
		{
			cout<<sta.top()<<" ";
			sta.pop();
		}
		cout<<1<<" ";
		for(auto i:v)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}