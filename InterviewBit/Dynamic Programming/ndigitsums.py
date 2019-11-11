#https://www.interviewbit.com/problems/n-digit-numbers-with-digit-sum-s-/
class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def solve(self, n, s):
        if s < 1 or s > 9*n :
            return 0
        mod = 1000000007
        dp = [[-1 for i in range(s)] for i in range(n)] 
        
        for i in range(s) :
            if i+1 <= 9 :
                dp[0][i] = 1
            else :
                dp[0][i] = 0
                
        for j in range(n) :
            dp[j][0] = 1
    
        
        for i in range(1, n) :
            for j in range(1, s) :
                dp[i][j] = 0
                k = 0
                if j>= 9 :
                    k = j-9
                for t in range(k, j+1) :
                    dp[i][j] = (dp[i][j] + dp[i-1][t])%mod
                    
        return dp[n-1][s-1]