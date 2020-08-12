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
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(i==0 and j==0)
				{
					cout<<"O";
				}
				else
				{
					cout<<(n>0?'.':'X');
				}
				n--;
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}