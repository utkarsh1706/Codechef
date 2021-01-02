#include <bits/stdc++.h>
using namespace std;
void my_print(int x)
{
    char symbol = (char)('a' + x );
    cout << symbol;
    return;
}
void tosolve(string str,int l,int r,int k)
{
	if(r==l)
	{
		my_print(l);
		return;
	}
	char now=str[k];
	int mid= l + (r - l) / 2;
	k=k+1;
	if(now=='0')
	{
		tosolve(str,l,mid,k);
	}
	else
	{
		tosolve(str,mid+1,r,k);
	}
	return;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		for (int i = 0; i < n; i+=4)
		{
			string r=str.substr(i,4);
			tosolve(r,0,15,0);
			if(i==n-4)
			{
			    cout<<endl;
			}
		}
	}
	return 0;
}