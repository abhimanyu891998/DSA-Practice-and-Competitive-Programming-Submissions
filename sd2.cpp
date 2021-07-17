#include <iostream>
using namespace std;

string simulate(int preferenceYan[], int preferenceKevin[]) {
    
    int n = 3;
    int arr[n+1]={0};
    bool flag = false;
    int i=0; int j=0;
    string res="";
    for(int k=0;  k<n; k++) {
        
        if(flag==false) {
            
            while(arr[preferenceYan[i]]!=0) {
                i++;
            }
            if(i<n+1) {
                arr[preferenceYan[i]]=1;
            }
            
            flag = !flag;
        }
        
        else {
            
            while(arr[preferenceKevin[j]]!=0) {
                j++;
            }
            if(j<n+1) {
                arr[preferenceKevin[j]]=2;
            }
            flag = !flag;
            
        }
    }
    
    for(int k=1; k < n+1; k++) {
        
        if(arr[k]==1)
            res+="Y";
        else
            res+="K";
    }
            
         
    return res;
}

int main() 
{
	// your code goes here
	int preferenceYan[] = {3,2,1};
	int preferenceKevin[] = {1,3,2};
	cout<<simulate(preferenceYan, preferenceKevin);
	return 0;
}