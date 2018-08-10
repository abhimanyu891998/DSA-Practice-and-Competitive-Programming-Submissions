#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>input;
	for(int i=0 ; i<n ; i++)
	{
		int temp;
		cin>>temp;
		input.push_back(temp);
		
	}


	for(int i=0 ; i<n ; i++)
	{
		if(input[i]%2==0)
		{
			input[i]--;
		}
	}

	for(auto op: input)
	{
		cout<<op<<" ";
	}


	return 0;
}