#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,x,p,k;
	    cin>>n>>x>>p>>k;
	    long long curr=n,ans=-1;
	    long long a[n+1];
	    bool flag=false;
	    for(long long i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a+1,a+n+1);
	    if(a[p]==x)
	    {
	        ans=0;
	    }
	    else if(k>=p && a[p]>x)
	    {
	        ans=0;
	        bool flag=false;
	        for(long long i=1;i<=n;i++)
	        {
	            if(a[i]==x)
	            {
	                flag=true;
	                break;
	            }
	        }
	        if(!flag)
	        {
	            a[k]=x;
	            ans++;
	            sort(a+1,a+n+1);
	        }
	        while(a[p]!=x && p>=0)
	        {
	            ans++;
	            p--;
	        }
	    }
	    else if(p>=k && a[p]<x)
	    {
	        ans=0;
	        bool flag=false;
	        for(long long i=1;i<=n;i++)
	        {
	            if(a[i]==x)
	            {
	                flag=true;
	                break;
	            }
	        }
	        if(!flag)
	        {
	            a[k]=x;
	            ans++;
	            sort(a+1,a+n+1);
	        }
	        while(a[p]!=x && p<=n)
	        {
	            ans++;
	            p++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}