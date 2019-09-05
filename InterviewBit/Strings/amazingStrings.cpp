int Solution::solve(string A) {
    long int strLength = A.length();
    long int outputCount = 0;
    
    for(int i=0 ; i<strLength ; i++)
    {
        if(A[i]== 'a' || A[i] == 'e' || A[i] =='i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
        {
            
            outputCount += (strLength - (i));
        }
    }
    
    return outputCount%10003;
    
}