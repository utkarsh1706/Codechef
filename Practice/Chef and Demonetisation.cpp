#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll s,n;
		cin>>s>>n;
		if(s<=n)
		{
            if(s==1)
            {
                cout<<1<<endl;
            }
			else if(s%2==0)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<2<<endl;
			}
			continue;
		}
        ll a=s/n;
        ll b=s%n;
        if(b==0)
        {
        	cout<<a<<endl;
        }
        else
        {
        	if(b==1 or b%2==0)
        	{
        		cout<<a+1<<endl;
        	}
        	else 
        	{
        		cout<<a+2<<endl;
        	}
        }
	}
	return 0;
}