#include<bits/stdc++.h>
int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int minimumXOR = INT_MAX;
    for(int i=0 ; i<A.size() ; i++)
    {
        if((A[i]^A[i+1])< minimumXOR)
        {
            minimumXOR = A[i]^A[i+1];
        }
    }
    
    return minimumXOR;
}
