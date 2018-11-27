#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    map<char,int>charFreq;
	    vector<char> v1;
	    while(n--){
	        char c;
	        cin>>c;
	        int flag =0;
	        char printChar;
	        charFreq[c]++;
	        if(charFreq[c]==1){
	            v1.push_back(c);
	        }
	        
	        for(auto i= v1.begin() ; i!=v1.end() ; i++){
	            char temp = (*i);
	            if(charFreq[temp]==1){
	                
	                printChar = temp;
	                flag=1;
	                break;
	                
	            }
	        }
	        
	        if(flag==0)cout<<-1<<" ";
	        else cout<<printChar<<" ";
	        
	    }
	    
	    cout<<endl;
	   
	}
	return 0;
}