vector<int> Solution::maxone(vector<int> &A, int B) {
    
int n=A.size();
    int longest=0,start=-1;
    vector<int> zeros(n+1,0);       //keeps track of #zeroes
    zeros[0]=0;
    for (int i=1;i<=n;i++){
        zeros[i]=zeros[i-1];        //#zeroes upto index i=zeros[i+1]
        if (A[i-1]==0) zeros[i]++;
    }
    //including longest in iterator definition saves a lot of time
    for (int i=0;i<=n-longest;i++){ 
        for (int j=i+longest;j<n;j++){
            if (zeros[j+1]-zeros[i]<=B){
                if (j-i>=longest){
                    longest=j-i+1;
                    start=i;
                }
            }
            else break;
        }
    }
    //generate the index vector
    vector<int> ans;
    for (int i=0;i<longest;i++){
        ans.push_back(start++);
    }
    return ans;
    
}
