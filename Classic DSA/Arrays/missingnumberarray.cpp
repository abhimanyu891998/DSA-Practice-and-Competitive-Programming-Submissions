//https://practice.geeksforgeeks.org/problems/missing-number-in-array/0
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum = (n*(n+1))/2;
	    for(int i=0 ; i<n-1 ; i++)
	    {
	        int temp;
	        cin>>temp;
	        sum-=temp;
	    }
	    
	    cout<<sum<<endl;
	    
	   	}
	return 0;
}