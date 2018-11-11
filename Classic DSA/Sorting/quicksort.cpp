#include<iostream>
using namespace std;

int partition(int arr[],int start, int end){

    int pivot=arr[end];
    int i = start-1;
    int j = start;
    while(j<=end-1){
    if(arr[j]<=pivot){
        i++;
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    j++;
    }

    int temp = arr[i+1];
    arr[i+1]=arr[end];
    arr[end]= temp;

    return i+1;


}

void quickSort(int arr[], int start , int end){
    if(start<end){
        int p = partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  quickSort(arr,0,n-1);
  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }

  return 0;

}