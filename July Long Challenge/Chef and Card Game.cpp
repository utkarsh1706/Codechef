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
		int pointa=0,pointb=0;
		for (int i = 0; i < n; ++i)
		{
            int a,b;
			cin>>a>>b;
			int suma=0,sumb=0;
			while(a!=0)
			{
				suma=suma+(a%10);
				a/=10;
			}
			while(b!=0)
			{
				sumb=sumb+(b%10);
				b/=10;
			}
			if(suma>sumb)
			{
				pointa++;
			}
			else if(sumb>suma)
			{
				pointb++;
			}
			else
			{
				pointb++;
				pointa++;
			}
		}
		if(pointa>pointb)
		{
			cout<<0<<" "<<pointa;
		}
		else if(pointa<pointb)
		{
			cout<<1<<" "<<pointb;
		}
		else
		{
			cout<<2<<" "<<pointb;
		}
		cout<<endl;

	}
	return 0;
}