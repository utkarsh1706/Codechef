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
		vector<int>v;
		for (int i = 0; i < n; ++i)
		{
			int d;
			cin>>d;
			v.push_back(d);
		}
		sort(v.begin(), v.end());
		int i=v.size()-1,step=0;
		while(i>0)
		{
			if(v[i]==v[i-1])
			{
				i--;
				continue;
			}
			int h=v[i-1];
			for(int j=i-1;j<v.size();j++)
			{
				v[j]=h;
			}
			step++;
			i--;
		}
		cout<<step<<endl;
	}
	return 0;
}