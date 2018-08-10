//Using recursion
#include<bits/stdc++.h>

using namespace std;


vector<int> input;
vector<int>subset;
int n;

void search(int k)
{
    if(k==n)
    {
        for(auto a: subset)
        {
            cout<<a<<' ';
        }
        
        cout<<endl;
        return ;
    }

    search(k+1);
    subset.push_back(input[k]);
    search(k+1);
    subset.pop_back();


}

int main()
{

    
    
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        int temp;
        cin>>temp;
        input.push_back(temp);
    }

    search(0);



}