#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int arr[n];
        int leftsum=0;
        int flag=0;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0 ; i<n ; i++){
            sum+=arr[i];
        }
        
        for(int i=0 ; i<=n ; i++){
            sum-=arr[i];
            if(sum==leftsum){
                cout<<i+1<<endl;
                flag++;
                break;
            }
            
            leftsum+=arr[i];
        }
        
        if(flag==0){
            cout<<-1<<endl;
        }
        
        
        
	}
	return 0;
}