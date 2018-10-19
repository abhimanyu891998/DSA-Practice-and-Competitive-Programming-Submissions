//Algorithm to find all number of ways of placing n queens on n*n chessboard using backtracking and recursion

#include<bits/stdc++.h>
using namespace std;

int n=0; int countways=0; vector<int>column = {0}; vector<int>diag1 = {0}; vector<int>diag2 = {0}; //Global vars

void search(int y)
{
	if(y==n)
	{
		countways++;
		return;
	}

	else
	{
		for(int x=0; x<n ; x++)
		{
			if(column[x]||diag1[x+y]||diag2[x-y+n-1])
				continue;
			else
				column[x]=diag1[x+y]=diag2[x-y+n-1]=1;
				search(y+1);
				column[x]=diag1[x+y]=diag2[x-y+n-1]=0;
		}
	}




}

int main()
{
   cin>>n;
   search(0);
   cout<<countways;

   return 0;
}
