#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int m , int r)
{
  int i,j,k;
  int n1 = m-l + 1;
  int n2 = r-m;
  int L[n1], R[n2];
  for(int i=0 ; i< n1 ; i++)
  {
    L[i] = arr[l+i];
  }

  for(int j=0 ; j<n2 ; j++)
  {
    R[j] = arr[m+1+j];
  }

  

}

void mergeSort(int arr , int l , int r)
{
  if(l<r)
  {
    int m = l + (r-1)/2;

    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
  }
}

int main()
{
  int arr = {19,11,12,4,7,2};
  int size = 6;
  mergeSort(arr,0,5);
  for(int i=0 ; i<6 ; i++)
  {
    cout<<arr[i]<<" ";
  }
}
