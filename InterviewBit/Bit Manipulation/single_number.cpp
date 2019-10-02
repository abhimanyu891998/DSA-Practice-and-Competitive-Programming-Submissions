int Solution::singleNumber(const vector<int> &A) {
    
    int result = 0;
    
    for(auto a : A)
    {
        result^=a;
    }
    
    return result;
}
