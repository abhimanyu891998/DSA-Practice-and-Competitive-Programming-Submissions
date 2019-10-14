//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       map<char,int>freqCheck;
        int maxSize = 0;
        int currSize = 0;
        int lastIndex = 0;
        for(int i=0 ; i<s.length() ; i++)
        {   
            freqCheck[s[i]]++;
            
            if(freqCheck[s[i]]>1)
            {
                i= lastIndex;
                lastIndex = i+1;
                currSize=0;
                freqCheck.clear();
            }
            
            else
            {
                currSize++;
                if(currSize>maxSize)
                {
                    maxSize = currSize;
                }
            }
        }
        
        return maxSize;
    }
};