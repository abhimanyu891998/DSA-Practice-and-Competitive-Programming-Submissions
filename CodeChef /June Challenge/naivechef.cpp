#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int i = 0;
	while(i<n)
	{
		int a,b;
		double nn;
		cin>>nn>>a>>b;
		
		double na=0; double nb=0;
		for(int j=0 ; j<nn ; j++)
		{
			int temp;
			cin>>temp;
			if(temp==a)
			{
				na++;
			}

			if(temp == b)
			{
				nb++;
			}
		}

		cout<< setprecision(7)<<(na/nn) * (nb/nn) << endl;
		i++;

	}

	return 0;

}