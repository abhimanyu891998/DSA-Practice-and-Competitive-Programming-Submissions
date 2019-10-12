#include<bits/stdc++.h>
 int smallest(int x, int y, int z){
    int smallest = min(x,y);
    return min(smallest,z);
    }
    
 int maximum(int x, int y, int z){
    int maxi = max(x,y);
    return max(maxi,z);
    }

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=A.size()-1;
    int j= B.size()-1;
    int k = C.size()-1;
    int currentMin = INT_MAX;

    while((i>=0) && (j>=0) && (k>=0))
    {
        int diff = abs(maximum(A[i],B[j], C[k]) - smallest(A[i],B[j],C[k]));
        
        if(diff<currentMin){
            currentMin=diff;
        }
        
        
        if(maximum(A[i],B[j], C[k]) == A[i])
        {
            i--;
            
        }
        
        else if(maximum(A[i],B[j], C[k]) == B[j])
        {
            j--;
        }
        
        else
        {
            k--;
        }
    }
    
    return currentMin;
    
    
}
