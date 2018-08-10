//http://codeforces.com/contest/1015/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    int ctr=0;
    cin>>n>>m;
    int arrays[m]={0};

    for(int i=0 ; i<n ; i++)
    {
        int l;
        int r;
        cin>>l>>r;
        for(int j=l-1 ; j<r ; j++)
        {

            arrays[j]=1;

        }

    }

    for(int k = 0 ; k<m ; k++)
    {
        if(arrays[k]==0)
        {
            ctr++;
        }
    }

    cout<<ctr<<endl;

    for(int q=0 ; q<m ; q++)
    {
        if(arrays[q]==0)
        {
            cout<<q+1<<" ";
        } 
    }
}