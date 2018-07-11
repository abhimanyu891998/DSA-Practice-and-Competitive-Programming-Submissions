#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin>>t;

	for(int i=1 ; i<=t ; i++)
	{
		int n,k;
		long long v;
		cin>>n>>k>>v;
		vector<string>attrlist;
		for(int j=0 ; j<n ; j++)
		{
			string temp;
			cin>>temp;
			attrlist.push_back(temp);
		}

		int q = (k*(v-1))%n;
		int vis[50];
		for(int w=0 ; w<k ; w++)
		{
			vis[w]= (q+w)%n;
		}


		sort(vis,vis+k);


		cout<<"Case #"<<i<<":"<<" ";
		for(int r=0 ; r<k ; r++)
		{
			cout<<attrlist[vis[r]]<<" ";
		}
		cout<<endl;
	}
	






}