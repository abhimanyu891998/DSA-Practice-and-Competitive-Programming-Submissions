#include<iostream>

using namespace std;

int main()
{
	int n;
	int k;
	int max=0;
	int a1, a2;
	cin>>n>>k;
	cin>>a1>>a2;
	if(a2>k)
	{
		max = (a1-(a2-k));
	}

	else
	{
		max = a1;
	}
	for(int i=0 ; i<n-1 ; i++)
	{
		int a,b;
		cin>>a>>b;
		if(b>k)
		{
			if((a-(b-k))>max)
			{
				max= (a-(b-k));
			}
		}
		else
		{
			if(a>max)
			{
				max=a;
			}
		}
	}

	cout<<max;

	return 0;

}