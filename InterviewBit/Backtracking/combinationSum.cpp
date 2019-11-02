void combUtil(vector<int>& A, int sum , vector<vector<int>>& output, vector<int>& r , int i)
{
    if(sum<0)
    {
        return;
    }
    
    if(sum==0)
    {
        output.push_back(r);
        return;
    }
    
    while(i<A.size() && sum-A[i]>=0)
    {
        r.push_back(A[i]);
        combUtil(A, sum-A[i], output, r, i);
        i++;
        
        r.pop_back();
    }
}


vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(),A.end()), A.end());
    vector<int> r;
    vector<vector<int>> output;
    combUtil(A,B,output, r, 0);
    return output;
    
    
    
    
    
}


