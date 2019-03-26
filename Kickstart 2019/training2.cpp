#include<bits/stdc++.h>
using namespace std;

long int minimumHours=INT_MAX;

void minOperationUpdate(int arr[], int start , int end)
{   
   
    int Hours=0;
    for(int i=start ; i<=end ; i++)
    {
        Hours+= (arr[end]-arr[i]);
    }

    minimumHours = Hours;   
}

// returns min difference between max 
// and min of any K-size subset 
void minDifferenceAmongMaxMin(int arr[], int N, int K) 
{ 
    // sort the array so that close 
    // elements come together. 
    sort(arr, arr + N); 
  
    // initialize result by a big integer number 
    // int res = INT_MAX; 
    // int start = arr[0];
    // int end = arr[N-1];
  
    // loop over first (N - K) elements 
    // of the array only 
    for (int i = 0; i <= (N - K); i++) 
    { 
        // get difference between max and 
        // min of current K-sized segment 
        // int curSeqDiff = arr[i + K - 1] - arr[i]; 

        // if(min(res,curSeqDiff) == curSeqDiff)
        // {
        //     end = i+K-1;
        //     start = i;
        // }
        // res = min(res, curSeqDiff);

        // long int start = i+K-1;
        // long int end = i;

        long int Hours = 0;
        long int start = i;
        long int end = i+K-1;
        for(int i=start ; i<=end ; i++)
        {
            Hours += arr[end]-arr[i];
        }

        if(Hours<minimumHours)
        {
            minimumHours=Hours;
        }
        
    }
 

    // minOperationUpdate(arr,start,end);






  
    
} 



// Driver code  
int main()  
{  


    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        int n,p;
        cin>>n;
        cin>>p;
        int arr[n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>arr[i];
        }

        minDifferenceAmongMaxMin(arr, n, p); 
        cout<<"Case #"<<i<<": "<<minimumHours<<endl;
        i++;
        minimumHours=INT_MAX;

    }
    
}
