#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,ans=0;
		cin>>x>>y;
		if(x==(2*y))
		{
			ans=y;
		}
		else if(x<=y)
		{
			ans=0;
		}
		else if(x>y and x<(2*y))
		{
			ans=(x%y);
		}
		cout<<ans<<endl;
	}
	return 0;
}