#include <iostream>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string input;
	    cin>>input;
	    stringstream ss;
	    ss<<input;
	    string temp;
	    vector<string>reverseString;
	    while(getline(ss,temp,'.')){
	        reverseString.push_back(temp);
	    }
	    
	    for(int i= reverseString.size()-1 ; i>=0 ; i--){
	        if(i!=0)
	        cout<<reverseString[i]<<".";
	        else
	        cout<<reverseString[i];
	        
	    }
	    cout<<endl;
	}
	return 0;
}