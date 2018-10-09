//https://www.interviewbit.com/problems/noble-integer/
int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
   /*  auto it = A.begin();
    while(it != A.end())
    {
        it = adjacent_find(A.begin(), A.end());
        if(it!= A.end())
        {
            A.erase(it);
            continue;
        }
    } */
    
    if(A.size()==0)
    {
        return -1;
    }
    
    else if(A.size()==1)
    {
        if(A[0]==0)
        {
            return 1;
        }
        
        else
        {
            return -1;
        }
    }
    
    else
    {
    for(int i=0 ; i<A.size() ; i++)
    {
        if(i==A.size()-1)
        {
            if(A[i]==0)
            {
                return 1;
            }
            
            else
            {
                return -1;
            }
        }
        
        else{ 
        if(A[i+1]!=A[i])
        {
            if(A[i]==((A.size()-1)-i))
            {
                return 1;
            }
        }
        
        else
        {
            continue;
        }
        }
    }
    
    }
    return -1;
    
}
