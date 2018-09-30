//http://codeforces.com/contest/1040/problem/B

#include<bits/stdc++.h>
using namespace std;


bool checkStatus(int arr[1000], int n)
{
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]!=1)
		{
			return false;
		}
	}

	return true;
}

void reset(int arr[1000],int n)
{
	for(int i=0 ; i<n ; i++)
	{
		arr[i]=0;
	}
}

void flipNos(int arr[1000], int k, int point, int n)
{

	for(int i=point ; i>= (point-k) ; i--)
	{
		if(i>=0 && i<n)
		{
			arr[i]=1;
		}
	}

	for(int i=point ; i<= (point+k) ; i++)
	{
		if(i>=0 && i<n)
		{
			arr[i]=1;
		}
	}

}

int main()
{

	int n,k;
	cin>>n>>k;
	int arr[1000] = {0};

	for(int i=0 ; i<n ; i++)
	{
		flipNos(arr,k,i,n);
		if(checkStatus(arr,n))
		{   
			cout<<1<<endl;
			cout<<i+1;
			return 0;
		}
		for(int j= (i+k+k+1) ; j<n ; j++)
		{
			flipNos(arr,k,j,n);
			if(checkStatus(arr,n))
			{
				cout<<2<<endl;
				cout<<i+1<<" "<<j+1;
				return 0;
			}

			else
			{
				flipNos(arr,k,j,n);
			}
		}

		reset(arr,n);


	}


	return 0;


}