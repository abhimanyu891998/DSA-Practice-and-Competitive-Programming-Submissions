#include<bits/stdc++.h>

using namespace std;

int bsearch(int low, int high , int arr[],int s)
{
    int mid = (low+high)/2;
    if(high>=1)
    {

    if(arr[mid]==s)
    {
        return mid;
    }

    else if(arr[mid]>s)
    {
        return bsearch(low,mid-1,arr,s);
    }

    else
    return bsearch(mid+1,high,arr,s);


   }


    return -1;



}

int main()
{
    int arr[] = {0,1,2,5,6};

    int result = bsearch(0,4,arr,1);

    cout<<result<<endl;
    return 0;
}
