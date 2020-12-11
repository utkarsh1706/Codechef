#include<iostream>
#include<bits/stdc++.h>
#define int long long int 
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.first<b.first;
}
int32_t main()
{   
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        pair<int,int>p[n];

        for(int i=0;i<n;i++)
        {
            cin>>p[i].second;
        }
        for(int i=0;i<n;i++)
        {
            cin>>p[i].first;
        }

        sort(p,p+n);

        int cost=0,dist=0,i=0;
        while(dist<n)
        {
            if(p[i].second+dist<=n)
            {
                cost+= p[i].first*p[i].second;
                dist+=p[i].second;
            }
            else
            {
                cost+=p[i].first*(n-dist);
                dist=n;
            }
            i++; 
        }
        cout<<cost<<endl;
    }
    return 0;
}