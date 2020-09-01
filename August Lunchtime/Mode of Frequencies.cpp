#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		unordered_map<int,int>hp;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			hp[x]++;
		}
		map<int,int>mp;
		for(auto j:hp)
		{
			mp[j.second]++;
		}
		int maxi=INT_MIN,num=0;
		for(auto j:mp)
		{
			if(j.second>maxi)
			{
				num=j.first;
				maxi=j.second;
			}
		}
		cout<<num<<endl;
	}
	return 0;
}