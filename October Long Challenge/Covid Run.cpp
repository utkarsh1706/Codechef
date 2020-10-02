#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,K,X,Y;
		cin>>N>>K>>X>>Y;
		if(K==0 and X==Y)
		{
		    cout<<"YES"<<endl;
		    continue;
		}
		int A=X;
		int n=0;
		X=X+1;
		bool istrue=false;
		while(A!=X)
		{
			if(n==0)
			{
				X=X-1;
			}
			X=(X+K)%N;
			if(X==Y)
			{
				istrue=true;
				break;
			}
			n++;
		}
		if(istrue)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}