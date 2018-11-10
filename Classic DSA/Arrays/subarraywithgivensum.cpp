//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,s; int flag=0;
	    cin>>n>>s;
	    int arr[n];
	    for(int i=0; i<n ; i++){
	        cin>>arr[i];
	    }
	    
	    int curr_sum = arr[0],start=0;
	    for(int i=1 ; i<=n ; i++){
	        while(curr_sum>s && start<i-1){
	            curr_sum -= arr[start];
	            start++;
	        }
	        
	        if(curr_sum==s){
	            
	            cout<<start+1<<" "<<i<<endl;
	            flag++;
	            break;
	        }
	        
	        if(i<n){
	            curr_sum+= arr[i];
	        }
	    }
	    
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}