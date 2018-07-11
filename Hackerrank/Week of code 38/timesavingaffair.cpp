#include <bits/stdc++.h>

using namespace std;

// Complete the leastTimeToInterview function below.
long leastTimeToInterview(int n, int k, int m) {
    // Return the least amount of time needed to reach the interview location in seconds.
    bool status = true;
    int graph[n][n];
    for(int i=0 ; i<n  ; i++)
    {
    	for(int j=0 ; j<n ; j++)
    	{
    		graph[i][j]=0;
    	}

 	
    }
    

    int inpt_ctr=0;
    while(inpt_ctr<m)
    {
    	int j1,j2,w;
    	cin>>j1>>j2>>w;
    	graph[j1-1][j2-1]=w;
    	graph[j2-1][j1-1]=w;
    	inpt_ctr++;
    }

    int dist[n];
    bool sptSet[n];
    for(int i=0 ; i<n ; i++)
    {
    	dist[i]= INT_MAX;
    	sptSet[i]= false;
    }

    dist[0] = 0;

    

     /* for(int i=0 ; i<n  ; i++)
    {
    	for(int j=0 ; j<n ; j++)
    	{
    		cout<<graph[i][j]<<" ";
    	}

    	cout<<endl;

    	
    }*/




    

    

    return 0.0;
	    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = leastTimeToInterview(n, k, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
