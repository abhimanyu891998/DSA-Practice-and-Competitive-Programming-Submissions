#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int k;
	cin>>n>>k;

	vector<int>input;
	vector<int>tempinput;
	vector<int>finalresult;

	for(int i=0 ; i<n ; i++)
	{
		int temp;
		cin>>temp;
		input.push_back(temp);

	}
    tempinput = input;
	int profit=0;
	sort(tempinput.begin(),tempinput.end());
	for(int i= (n-1) ; i>= (n-k) ; i--)
	{
		profit+=tempinput[i]++;
	}

	cout<<profit<<endl;

	
    




	
	
	return 0;
}