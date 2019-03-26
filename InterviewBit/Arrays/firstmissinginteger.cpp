#include<bits/stdc++.h>
int Solution::firstMissingPositive(vector<int> &A) {
    map<int,int> Amap;
    for(auto a : A)
    {
        Amap[a]+=2;
    }
    int maxElement = *max_element(A.begin(), A.end());
    if(maxElement>0)
    {
        for(int i=1 ; i<=maxElement+1 ; i++)
        {
            if(Amap[i]<2)
            {
                return i;
            }
        }
        
    }
    else
    {
        return 1;
    }
}
