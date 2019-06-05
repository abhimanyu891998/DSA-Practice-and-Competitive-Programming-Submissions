int Solution::gcd(int A, int B) {
    if(A==1 || B==1)
    {
        return 1;
    }
    
    else if(A==0 || B==0)
    {
        if(A==0 && B==0)
        {
           return 0; 
        }
        
        else if(A==0)
        {
            return B;
        }
        else
        {
            return A;
        }
    }
    
    else
    {
    while(A!=B)
    {
        if(A>B)
        {
            A-=B;
        }
        else
        {
            B-=A;
        }
    }
    
    
    return A;
    }
}

