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
		int arr[n+1][n+1];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>arr[i][j];
			}
		}
		int steps=0;
		for (int i = n-1; i >=1; --i)
		{
			int num=arr[i][i-1]+1;
			if(num!=arr[i][i])
			{
				steps++;
				int d=i+1;
				for(int j=0;j<d;j++)
				{
					for(int k=j;k<d;k++)
					{
						swap(arr[j][k],arr[k][j]);
					}
				}
			}
		}
		cout<<steps<<endl;
	}
	return 0;
}