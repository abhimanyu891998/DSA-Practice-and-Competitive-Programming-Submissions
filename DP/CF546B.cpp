#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	int n;
	cin>>n;
	vector<int> v;
	for(int i=0 ; i<n ; i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);

	}

	sort(v.begin(),v.end());

	

	int c=0; int a=0;
	

	for(int i=1 ; i<n ; i++)
	{
		if(v[i]==v[i-1])
		{
			v[i]++;
			c++;
		}

		else if(v[i]<v[i-1])
		{
			a = (v[i-1]-v[i]);
			v[i]+=a;
			c+=a;
			v[i]++;
			c++;
		}
	}
	cout<<c<<endl;

	

	return 0;
}