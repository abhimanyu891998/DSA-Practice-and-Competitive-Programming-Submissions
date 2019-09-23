int Solution::romanToInt(string A) {
    map<char,int>Conv;
    Conv['X'] = 10;
    Conv['I'] = 1;
    Conv['V'] = 5;
    Conv['L'] = 50;
    Conv['C'] = 100;
    Conv['D'] = 500;
    Conv['M'] = 1000;
    
    int sum = 0;
    for(int i=0 ; i<A.length(); i++)
    {
        if(i!=(A.length()-1))
        {
            if(Conv[A[i]] < Conv[A[i+1]])
            {
                sum-= Conv[A[i]];
            }
            
            else
            {
                sum+= Conv[A[i]];
            }
        }
        
        else
        {
            sum+= Conv[A[i]];
        }
    }
    
    return sum;
}
