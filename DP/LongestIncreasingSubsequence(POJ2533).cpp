#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> a;
	for(int i=0 ; i<n; i++)
	{    
		int temp;
		cin>>temp;
		a.push_back(temp);
	}

	int length[n];

	for(int k=0; k<n ; k++)
	{
		length[k]=1;
		for(int i=0 ; i<k ; i++)
		{
			if(a[i]<a[k])
			{
				length[k]=max(length[i]+1,length[k]);
			}
		}
	}

	cout<< *max_element(length,length+n);


}