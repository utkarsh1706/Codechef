#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
   string s,p;
   cin>>s;
   cin>>p;
   string s1,s2;
   int arr1[26],arr2[26];
   int n=s.size(), m=p.size();
   for(int i=0;i<26;i++)
   {
       arr1[i]=0;
       arr2[i]=0;
   }
   for(int i=0;i<n;i++)
   {
       arr1[s[i]-'a']++;
       arr2[s[i]-'a']++;
   }
   for(int i=0;i<m;i++)
   {
       arr1[p[i]-'a']--;
       arr2[p[i]-'a']--;
   }
   
   for(int i=0;i<=p[0]-'a';i++)
   {
       while(arr1[i]!=0)
       {
           s1+=(char)(i+97);
           arr1[i]--;
        }
   }
   //cout<<s1<<endl;
   s1+=p;
   //cout<<s1<<endl;
   for(int i=0;i<26;i++)
   {
            while(arr1[i]!=0)
       {
           s1+=(char)(i+97);
           arr1[i]--;
       }
   }
   //cout<<s1<<endl;
   for(int i=0;i<p[0]-'a';i++)
   {
       while(arr2[i]!=0)
       {
           s2+=(char)(i+97);
           arr2[i]--;
       }
   }
   //cout<<s2<<endl;
   s2+=p;
   //cout<<s2<<endl;
   for(int i=0;i<26;i++)
   {
            while(arr2[i]!=0)
       {
           s2+=(char)(i+97);
           arr2[i]--;
       }
   }
   //cout<<s1<<" "<<s2<<" "<<endl;
   cout<<min(s1,s2)<<endl;
}
return 0;
}