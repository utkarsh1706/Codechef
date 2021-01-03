#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,x,y;
		cin>>n>>k>>x>>y;
		bool issorted=false;
		int i=1;
		ll x1=0,y1=0,x2=0,x3=0,x4=0,y2=0,y3=0,y4=0;
		if(x>=y)
		{
			ll xdist=x,ydist=y;
			while(i<=4)
			{
				if(i==1)
				{
					ydist=ydist+(n-xdist);
					xdist=n;
					if(xdist==n and ydist==n)
					{
						issorted=true;
						break;
					}
					x1=xdist;
					y1=ydist;
				}
				else if(i==2)
				{
					xdist=xdist-(n-ydist);
					ydist=n;
					if(xdist==0 and ydist==n)
					{
						issorted=true;
						break;
					}
					x2=xdist;
					y2=ydist;
				}
				else if(i==3)
				{
					ydist=ydist-(xdist);
					xdist=0;
					if(xdist==0 and ydist==0)
					{
						issorted=true;
						break;
					}
					x3=xdist;
					y3=ydist;
				}
				else
				{
					xdist=xdist+(ydist);
					ydist=0;
					if(xdist==n and ydist==0)
					{
						issorted=true;
						break;
					}
					x4=xdist;
					y4=ydist;
				}
				i++;
			}
			if(issorted)
			{
				cout<<xdist<<" "<<ydist<<endl;
				continue;
			}
		}
		else
		{
			ll xdist=x,ydist=y;
			while(i<=4)
			{
				if(i==1)
				{
					xdist=xdist+(n-ydist);
					ydist=n;
					if(xdist==n and ydist==n)
					{
						issorted=true;
						break;
					}
					x1=xdist;
					y1=ydist;
				}
				else if(i==2)
				{
					ydist=ydist-(n-xdist);
					xdist=n;
					if(xdist==n and ydist==0)
					{
						issorted=true;
						break;
					}
					x2=xdist;
					y2=ydist;
				}
				else if(i==3)
				{
					xdist=xdist-(ydist);
					ydist=0;
					if(xdist==0 and ydist==0)
					{
						issorted=true;
						break;
					}
					x3=xdist;
					y3=ydist;
				}
				else
				{
					ydist=ydist+(xdist);
					xdist=0;
					if(xdist==0 and ydist==n)
					{
						issorted=true;
						break;
					}
					x4=xdist;
					y4=ydist;
				}
                i++;
			}
			if(issorted)
			{
				cout<<xdist<<" "<<ydist<<endl;
				continue;
			}
			
		}
		
		if((k)%4==1)
		{
			cout<<x1<<" "<<y1<<endl;
		}
		else if(k%4==2)
		{
			cout<<x2<<" "<<y2<<endl;
		}
		else if(k%4==3)
		{
			cout<<x3<<" "<<y3<<endl;
		}
		else
		{
			cout<<x4<<" "<<y4<<endl;
		}
	}
	return 0;
}