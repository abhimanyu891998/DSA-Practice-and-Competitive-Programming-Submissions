#include<bits/stdc++.h>
using namespace std;

int COST(vector<int> a)
{
    return (a[1]-a[0]);
}

int minimumSeatsAllocated =  INT_MAX;

int main()
{
    int n = 5;
    int q = 3;
    map<int,int> occupystatus;
    vector<vector<int>> vec = {{1,2},{3,4},{2,5}};
    std::sort(vec.begin(), vec.end(),
          [](const std::vector<int>& a, const std::vector<int>& b) {
        return COST(a) < COST(b);
    });
    
    for(int i=0 ; i<vec.size() ; i++)
    {   int seatsAllocated=0;
        for(int j=vec[i][0] ; j<vec[i][1] ; j++)
        {  
           if(occupystatus.count(i)!=1)
           { 
            occupystatus[j]=1;
            seatsAllocated+=1;
           }  
           

        }

        if(seatsAllocated<minimumSeatsAllocated)
        {
            minimumSeatsAllocated = seatsAllocated;
        } 
    }

    cout<<minimumSeatsAllocated;
}