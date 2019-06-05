int isPrime(int A)
{
    if(A==1)
    {
        return 0;
    }
    
    else
    {
        int upperLimit = (int)(sqrt(A));
        for(int i=2 ; i<= upperLimit ; i++)
        {
            if(i<A && A%i==0)
            {
                return 0;
            }
        }
        
        return 1;
        
    }
    
    return 1;
    
}

vector<int> Solution::primesum(int A) {
    
    if(A==4)
    {
        vector<int>output;
        output.push_back(2);
        output.push_back(2);
        return output;
    }
    
    else
    {
    for(int i=3 ; i<A ; i+=2)
    {
     if(isPrime(i) && isPrime(A-i))
     {   
         
         vector<int>output;
         output.push_back(i);
         output.push_back(A-i);
         return output;
     }
         
     }
    }
     
     
    }
    
