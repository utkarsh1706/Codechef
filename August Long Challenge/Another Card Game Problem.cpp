#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int chef,rick;
		cin>>chef>>rick;
		int j,k;
		if(chef%9!=0)
		{
			j=(chef/9)+1;;
		}
		else
		{
			j=chef/9;
		}
		if(rick%9!=0)
		{
			k=(rick/9)+1;;
		}
		else
		{
			k=rick/9;
		}
		if(chef/9 == rick/9)
		{
			cout<<1<<" "<<k<<endl;
		}
		else if(chef/9 >rick/9)
		{
			cout<<1<<" "<<k<<endl;
		}
		else
		{
			cout<<0<<" "<<j<<endl;
		}
	}
	return 0;
}