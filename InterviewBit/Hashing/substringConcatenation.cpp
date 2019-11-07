//https://www.interviewbit.com/problems/substring-concatenation/
vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    
    int start =0;
    int i=0;
    vector<int> output;
    int BStrLength = B[0].length();
    
    while(start!= (A.length()))
    {   
        int count1 = 0;
        string temp = "";
        int tempCount = 0;
        unordered_map<string,int> freq;
        while(i< (start+ (BStrLength* (B.size()))))
        {
            temp+=A[i];
            tempCount++;
            if(find(B.begin(), B.end(), temp)!=B.end())
            {   if(freq.find(temp)== freq.end() || count(B.begin(),B.end(),temp)>freq[temp])
                {
                   count1++; 
                }
                
                freq[temp]++;
                
                
                temp="";
            }
            
            else if(tempCount==BStrLength)
            {
                tempCount=0;
                temp="";
                count1=0;
                freq.clear();
            }
            
            if(count1== B.size())
            {   
                output.push_back(i - (BStrLength*(B.size())-1));
                temp="";
                count1=0;
            }
            
            i++;
            
        }
        
        start++;
        i=start;
        
        
        
    }
    
    return output;
}
