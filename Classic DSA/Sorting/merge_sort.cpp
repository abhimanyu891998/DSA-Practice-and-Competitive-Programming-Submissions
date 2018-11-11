#include<iostream>
using namespace std;

void merge(int arr[],int start,int mid, int end){
int a[mid-start+1];
int b[end-mid];
for(int i= 0 ; i< (mid-start+1) ; i++){
  a[i]= arr[start+i];
}
for(int j=0 ; j< (end-mid) ; j++){
  b[j] = arr[mid+1+j];
}

int i=0,j=0,k=start;
while(i<(mid-start+1) && j<(end-mid)){
  if(a[i]<= b[j]){
    arr[k]=a[i];

    i++;
  }
  else{
    arr[k]=b[j];
    j++;
  }
  k++;
}

while(i< (mid-start+1)){
  arr[k] = a[i];
  
  i++;
  k++;
}

while(j< (end-mid)){
  arr[k] = b[j];
  j++;
  k++;
}

return;

}

void mergeSort(int arr[], int start, int end){
if(start<end){
int mid = (start+end)/2;
mergeSort(arr,start,mid);
mergeSort(arr,mid+1,end);
merge(arr,start,mid,end);
}

}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n ; i++){
    cin>>arr[i];
  }

  mergeSort(arr,0,n-1);
  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }

  return 0;

}