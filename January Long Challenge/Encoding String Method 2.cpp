#include <bits/stdc++.h>
using namespace std;
void my_print(int x)
{
    char symbol = (char)('a' + x );
    cout << symbol;
    return;
}
void binarytodecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 	my_print(dec_value);
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
		string num;
		cin>>num;
		for (int i = 0; i < n; i+=4)
		{
			string r=num.substr(i,4);
			int m=stoi(r);
			binarytodecimal(r);
			if(i==n-4)
			{
				cout<<endl;
			}
		}
	}
	return 0;
}