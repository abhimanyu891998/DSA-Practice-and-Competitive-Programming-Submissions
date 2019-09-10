//Find index of substring in a string
int Solution::strStr(const string A, const string B) {
    int subStrLen = B.length();
    int strLen = A.length();
    char firstChar = B[0];
    int firstIndex = -1;
    int currentLen = 0;
    for(int i=0 ; i<strLen ; i++)
    {
        if(A[i] == firstChar)
        {   
            firstIndex=i;
            for(int j=0 ; j<subStrLen ; j++)
            {
                if(A[i+j]!=B[j])
                {
                    firstIndex=-1;
                    currentLen=0;
                    break;
                }
                
                currentLen++;
            }
            
            if(currentLen==subStrLen)
            {
                return firstIndex;
            }
        }
    }
    
    return firstIndex;
    
}
