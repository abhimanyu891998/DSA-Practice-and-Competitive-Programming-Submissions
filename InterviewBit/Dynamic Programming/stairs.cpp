//https://www.interviewbit.com/problems/stairs/
int Solution::climbStairs(int A) {
    int memo[A+1];
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 2;
    
    if(A==1)
    {
        return 1;
    }
    
    else if(A==2)
    {
        return 2;
    }
    
    else
    {
        for(int i=3;  i<=A ; i++)
        {
            memo[i] = memo[i-1] + memo[i-2];
        }
    }
    
    return memo[A];

    
}
