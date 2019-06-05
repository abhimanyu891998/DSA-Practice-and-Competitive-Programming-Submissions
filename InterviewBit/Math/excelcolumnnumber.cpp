#include<bits/stdc++.h>
int Solution::titleToNumber(string A) {
    map<char,int> convTbl;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=1; i<=26 ; i++)
    {
        convTbl[alphabet[i-1]] = i;
    }
    int strLength = A.length();
    int output;
    for(int i=A.length()-1 ; i>=0 ; i--)
    {
        output+= convTbl[A[A.length()-1-i]] * pow(26,i);
    }
    
    return output;
    
}
