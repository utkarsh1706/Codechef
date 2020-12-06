#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int di,vi,dm,vm,p,days=0;
	cin>>di>>vi>>dm>>vm>>p;
	if(di!=1 and dm!=1)
	{
		days=days+min(di,dm)-1;
	}
    //cout<<days<<endl;
	if(di<dm)
	{
		while(di!=dm and p>0)
		{
			p-=vi;
			di++;
            days++;
		}
	}
	else if(dm<di)
	{
		while(dm!=di and p>0)
		{
			p-=vm;
			dm++;
            days++;
		}
	}
    //cout<<p<<" "<<days<<endl;
	while(p>0)
	{
		p=p-(vi+vm);
		days++;
	}
	cout<<days<<endl;
	return 0;
}