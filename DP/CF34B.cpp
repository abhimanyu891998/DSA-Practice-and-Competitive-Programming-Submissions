#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> v;
	for(int i=0 ; i<n ; i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

	auto t = v.begin();
	sort(v.begin(),v.end());
	
	int sum = 0 ;

	for(int i=0  ; i<m ; i++)
	{
		if(sum> (sum+v[i]))
		{
			sum+=v[i];
		}
	}

	cout<< -1 * sum;


}

