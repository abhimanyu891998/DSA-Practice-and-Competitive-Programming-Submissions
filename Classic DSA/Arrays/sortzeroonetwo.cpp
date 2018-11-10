//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include <iostream>
#include<map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    map<int,int>numFreq;
	    for(int i=0 ;  i<n ; i++){
	        int temp;
	        cin>>temp;
	        numFreq[temp]++;
	        }
	        
	    int numzero = numFreq[0];
	    int numone = numFreq[1];
	    int numtwo = numFreq[2];
	    while(numzero--){
	        cout<<0<<" ";
	    }
	    while(numone--){
	        cout<<1<<" ";
	    }
	    while(numtwo--){
	        cout<<2<<" ";
	    }
	    cout<<endl;
	    
	    }
	return 0;
}