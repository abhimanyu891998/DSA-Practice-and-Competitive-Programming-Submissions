//https://www.interviewbit.com/problems/permutations/

void permuteUtil(vector<int>& A, vector<vector<int>>& output, vector<int>& r, int n)
{
    if(r.size()==n)
    {
        output.push_back(r);
        return;
    }
   
    for(int i=0 ; i<A.size() ; i++)
    {
        r.push_back(A[i]);
        vector<int> nA = A;
        vector<int>::iterator it = nA.begin();
    while(it != nA.end())
    {
        if(*it == A[i])
        {
            it = nA.erase(it);
        }
        else
            it++;
    }
        permuteUtil(nA, output,  r, n);
        r.pop_back();
    }
    
    return;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    
    vector<vector<int>> output;
    vector<int> r;
    int n = A.size();
    permuteUtil(A,output,r,n);
    return output;
    
    
}
