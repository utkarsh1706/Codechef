#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		unordered_map<string,string>mp;
		unordered_map<string,string>hp;
		int g=n;
		while(n--)
		{
			string a,b;
			cin>>a>>b;
			mp[a]=b;
			hp[b]=a;
		}
		string start;
		for(auto i:mp)
		{
		    //cout<<i.first<<endl;
			if(!hp.count(i.first))
			{
				start=i.first;
				break;
			}
		}
		//cout<<start<<" ";
		while(g--)
		{
			cout<<start<<"-"<<mp[start]<<" ";
			start=mp[start];
		}
		cout<<endl;
	}
	return 0;
}