#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,p;
		cin>>h>>p;
		while(h>=0 or p>=0)
		{
			h=h-p;
			p=p/2;
			if(h<=0)
			{
				cout<<1<<endl;
				break;
			}
			if(p<=0)
			{
				cout<<0<<endl;
				break;
			}
		}
		
	}
	return 0;
}