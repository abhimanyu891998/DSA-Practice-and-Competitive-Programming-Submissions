int Solution::isPalindrome(int A) {
    int val = A;
    int rev = 0;
    while(A>0)
    {
        rev = rev*10 + A%10;
        A = A/10;
    }
    
    if(rev==val)
    {
        return 1;
    }
    
    else
    return 0;
}
