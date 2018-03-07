#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

using namespace std;


int memo[105][105]={0} ;



void outputfn(int q, int w, vector<string>a,vector<string>b)
{
     if(q==0|| w==0)
     {
     	return;
     }
    else if(memo[q][w]!= max(memo[q-1][w],memo[q][w-1]))
    {   
    	
    	outputfn(q-1,w-1,a,b);
    	cout<<a[q-1]<<" ";
    }

    else if(memo[q][w]==memo[q-1][w])
    {
    	outputfn(q-1,w,a,b);
    }

    else
    {
    	outputfn(q,w-1,a,b);
    }


} 


int main()
{
	

	string c;
	string e="  ";
	

	while(cin>>c)

	{
		vector<string> a;
vector<string> b;
		if(c!="#")
		{
			a.push_back(c);
			while(cin>>c && c!="#")
				{a.push_back(c);}
			while(cin>>c && c!="#")
		{
			b.push_back(c);
		}

		}
		else
		{
			continue;
		}


    
    

	for(int i=0 ; i<105 ; i++)
	{
		for(int j=0 ; j<105 ; j++)
		{
			memo[i][j]=0;
		}
	}
	for(int i=0 ; i<=a.size(); i++)
		{	
			for(int j=0 ; j<=b.size() ; j++)
			{   
				if(i==0 || j==0)
				{
					memo[i][j]=0;
				}
				else if(a[i-1]==b[j-1])
				{
					
					memo[i][j]= memo[i-1][j-1]+1;
					
				}

				else
				{
					memo[i][j]= max(memo[i-1][j],memo[i][j-1]);
				}
			}
			}



           
			outputfn(a.size(),b.size(),a,b);

		
			cout<<endl;

		}




  return 0;
	

}
