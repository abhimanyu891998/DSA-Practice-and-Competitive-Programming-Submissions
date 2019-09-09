string Solution::longestPalindrome(string A) {
    int n = A.length();
    bool palindromeTable[n][n];
    int maximumLength = 1;
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            palindromeTable[i][j] = false;
        }
    }
    
    for(int i=0 ; i<n  ; i++)
    {
        palindromeTable[i][i] = true;    
    }
    
    
    int start = 0;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(A[i]==A[i+1])
        {
            palindromeTable[i][i+1] = true;
            maximumLength = 2;
            start = i;
        }
        
        
    }
    
    
    // Check for lengths greater than 2. k is length 
    // of substring 
    for (int k = 3; k <= n; k++) 
    { 
        // Fix the starting index 
        for (int i = 0; i < n-k+1 ; i++) 
        { 
            // Get the ending index of substring from 
            // starting index i and length k 
            int j = i + k - 1;
            
            
            // checking for sub-string from ith index to 
            // jth index iff str[i+1] to str[j-1] is a 
            // palindrome 
            if (palindromeTable[i+1][j-1] && (A[i] == A[j])) 
            { 
                palindromeTable[i][j] = true; 
                    
                if (k > maximumLength) 
                {   
                    start = i;
                    maximumLength = k; 
                } 
            } 
        } 
    } 
    
    string output = "";
    
    for(int i=start ; i<start+maximumLength ; i++)
    {
        output += A[i];
    }
    
    return  output;
    
    
}
