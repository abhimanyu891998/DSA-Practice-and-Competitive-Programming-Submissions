#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


void search(string input, bool chosen[], vector<char>permutation, vector<vector<char>> &output){
 if(permutation.size()==input.length()){
    
     output.push_back(permutation);
    
 }
 
 else
 {
     for(int i=0 ; i<input.length() ; i++){
         if(chosen[i])continue;
         chosen[i]=true;
         permutation.push_back(input[i]);
         search(input,chosen,permutation,output);
         chosen[i]=false;
         permutation.pop_back();
     }
 }
 
 
    
    
}

int main() {
	//code
	int n;
	cin>>n;
	while(n--){
	    string input;
	    cin>>input;
	    vector<vector<char>>output;
	    bool chosen[input.length()] = {false};
	    vector<char>permutation;
	    search(input,chosen,permutation,output);
	    sort(output.begin(),output.end());
	    for(int i=0 ; i<output.size() ; i++){
	        for(int j=0 ; j<output[i].size() ; j++){
	            cout<<output[i][j];
	        }
	        cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}