int get(vector<vector<int>> &A,int i,int j)
{
    if(i<0 || j<0)
       return 0;
    return A[i][j];
}
int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0)
       return 0;
    for(int j=0;j<A[0].size();j++){
        for(int i=0;i<A.size();i++)
            A[i][j]+=get(A,i-1,j);
    }
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i;j<A.size();j++)
        {
            unordered_map<int,int> m;
            for(int x=0,temp=0;x<A[i].size();x++)
            {
                temp+=get(A,j,x)-get(A,i-1,x);
                m[temp]++;
            }
            m[0]++;
            for(auto itr=m.begin();itr!=m.end();itr++)
                ans+=itr->second*(itr->second-1)/2;
        }
    }
    return ans;
}