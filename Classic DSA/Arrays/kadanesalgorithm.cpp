//Max sum subarray
#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	while(n--)
	{
	    int size;
	    cin>>size;
	    int arr[size];
	    for(int i=0; i<size ; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int maxsum = INT_MIN;
	    int sum=0;
	    for(int i=0 ; i<size ; i++)
	    {
	       sum =  max(sum+arr[i],arr[i]);
	       if(sum>=maxsum)
	       {
	         maxsum = sum;    
	       }
	       
	    }
	
	    
	    cout<<maxsum<<endl;
	    
	    
	    
	}
	
	return 0;
}