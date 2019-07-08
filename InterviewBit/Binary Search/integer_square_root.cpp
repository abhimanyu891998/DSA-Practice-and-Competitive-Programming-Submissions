int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long int start = 0; long int last = A; long int mid; long int ans;
    if(A==1)
    {
        return 1;
    }
    
    else{
        
    while(start<=last)
    {
        mid = (last+start)/2;
    
        if((mid*mid)==A)
        {
            return mid;
        }
        

        else if((mid*mid)<A)
        {
            start = mid+1;
            ans = mid;
        }
        
        else
        {
            last = mid-1;
        }
    }
    return ans;
    }
    
    
}
