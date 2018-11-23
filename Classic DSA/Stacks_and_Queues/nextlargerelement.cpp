#include <iostream>
#include<stack>
#include<vector>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	
	while(t--){
	    stack<long int> s;
	    
	    int n;
	    cin>>n;
	    long int inputArray[n];
	    vector<long int> answer(n);
	   
	    for(int i=0 ; i<n ; i++){
	        cin>>inputArray[i];
	    }
	    
	    s.push(0);
	    
	    for(int i=1 ; i<n ; i++){
	        
	         while(s.empty()==false && inputArray[i]>inputArray[s.top()]){
	            answer[s.top()] = inputArray[i];
	            s.pop();
	        }
	        
	        s.push(i);
	 
	    }
	    
	    
	    while(!s.empty()){
	        answer[s.top()] = -1;
	        s.pop();
	    }
	    
	    
	    for(int i=0 ; i<n ; i++){
	        cout<<answer[i]<<" ";
	    }
	    
	    
	    cout<<endl;
	    
	    
	    
	    
	}
	return 0;
}