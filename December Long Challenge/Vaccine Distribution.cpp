#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
        int days=0;
		int notrisk=0,risk=0;
		while(n--)
		{
			int x;
			cin>>x;
			if(x<=9 or x>=80)
			{
				risk++;
			}
			else
			{
				notrisk++;
			}
		}
		int v=notrisk%d;
		int g=notrisk/d;
		int l=risk%d;
		int z=risk/d;
		if(risk==0 and notrisk!=0)
		{
			if(notrisk<d)
			{
				days=1;
			}
			else if(v==0)
			{
				days=(g);
			}
			else if(v!=0)
			{
				days=1+g;
			}
		}
		else if(risk!=0 and notrisk==0)
		{
			if(risk<d)
			{
				days=1;
			}
			else if(l==0)
			{
				days=(z);
			}
			else if(l!=0)
			{
				days=1+z;
			}
		}
		else if(risk<d and notrisk<d)
		{
			cout<<2<<endl;
			continue;
		}
		else if(risk<d and notrisk>=d)
		{
			if(v==0)
			{
				days=1+(g);
			}
			else
			{
				days=1+1+(g);
			}
		}
		else if(notrisk<d and risk>=d)
		{
			if(l==0)
			{
				days=1+(z);
			}
			else
			{
				days=1+1+(z);
			}
		}
		else if(notrisk>=d and risk>=d)
		{
			if(l!=0 and v!=0)
			{
				days=2+(z)+(g);
			}
			else if((l==0 and v!=0) or (l!=0 and v==0))
			{
				days=1+(g)+(z);
			}
			else if(l==0 and v==0)
			{
				days=(z)+(g);
			}
		}
		cout<<days<<endl;
	}
	return 0;
}