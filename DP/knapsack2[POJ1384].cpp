#include<iostream>
#include<algorithm>

using namespace std;

int mincost[10005];
int main()
{
	int T,E,F;
	int N; int P[501], W[501];


	cin>>T;
	while(T--)
	{
         
		cin>>E>>F;
		F= F-E;
		cin>>N;
		for(int i=0 ; i<N ; i++)
		{
			cin>>P[i]>>W[i];
		}

		fill(mincost, mincost+10005 , 999999999);
		mincost[0]=0;

        for(int i=0 ; i<N ; i++)
        {
        	for(int j= 0 ; j+W[i]<=F ; j++)
        	{
        		
        		mincost[j+W[i]] = min((mincost[j]+P[i]), mincost[j+W[i]]);

        	}
        }

        if(mincost[F]==999999999)
        {
        	cout<<"This is impossible."<<endl;
        }

        else
        {
        	cout<<"The minimum amount of money in the piggy-bank is"<<" "<<mincost[F]<<"."<<endl;
        }


	}
}