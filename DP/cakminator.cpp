#include<iostream>

using namespace std;

int main()
{

	int m,n;
	cin>>m>>n;
	char cake[10][10];
	int rowcake[10][10] = {0};
	int  colcake[10][10] = {0};
	for(int i=0; i<m  ; i++)
	{	for(int j=0 ; j<n; j++)
		{
			cin>>cake[i][j];
			if(cake[i][j]=='S')
			{
				for(int x=0 ; x<n ; x++)
				{
					rowcake[i][x]=1;
				}

				for(int y=0 ; y<m ; y++)
				{
					colcake[y][j]=1;
				}
			}
			
		}
	}





	int answer = 0;

	for(int i=0 ; i<m ; i++)
	{
		for(int j=0; j<n ; j++)
		{
			if(rowcake[i][j]==0 || colcake[i][j]==0)
			{
				answer++;
			}
		}
	}

	cout<<answer;


	
	


}

   