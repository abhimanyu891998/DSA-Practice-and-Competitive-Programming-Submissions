#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string input;
	    cin>>input;
	    map<char,int>charFreq;
	    
	    for(int i=0 ; i<input.length() ; i++){
	        charFreq[input[i]]++;
	    }
	   
	    if((charFreq['{']==charFreq['}']) && (charFreq['(']==charFreq[')']) && (charFreq['[']==charFreq[']'])){
	        cout<<"balanced"<<endl;
	    }
	    else{
	        cout<<"not balanced"<<endl;
	    }
	}
	return 0;
}