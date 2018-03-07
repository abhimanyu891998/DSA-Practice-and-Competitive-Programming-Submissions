#include<iostream>
using namespace std;

 
// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[3407][400];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
 
int main()
{   int n,m;
	cin>>n>>m;
    int val[3407];
    int wt[3407];
    for(int i=0 ; i<n ; i++)
    {
    	cin>>wt[i]>>val[i];
    }
    int  W = m;
    cout<<knapSack(W, wt, val, n);
    return 0;
}