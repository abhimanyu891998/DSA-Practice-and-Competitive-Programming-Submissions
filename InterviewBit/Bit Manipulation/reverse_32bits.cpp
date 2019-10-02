unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    
    unsigned int reverse = 0;
    
    for(auto i= 31 ; A; )
    {
        reverse|= (A&1) << i;
        A>>=1;
        i--;
    }
    
    return reverse;
    
    
}
