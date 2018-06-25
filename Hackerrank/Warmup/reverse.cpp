#include<iostream>
#include<string>

using namespace std;

int main()
{

	string a;
	string b;
	cin>>a;
	cin>>b;
	int a1 =0;
	int b1=0;
	for(int i= a.length()-1 ; i>=0 ; i--)
	{
		if(a[i]!=b[b1])
		{
			a1=1;
			
		}

		b1++;
	}

	if(a1==1)
	{
		cout<<"NO";
	}

	else
	{
		cout<<"YES";
	}

}