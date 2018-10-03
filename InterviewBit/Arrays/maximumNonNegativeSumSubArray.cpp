//https://www.interviewbit.com/problems/max-non-negative-subarray/?ref=dash-reco

vector<int> Solution::maxset(vector<int> &A) {
    
    long int currentSum=0;
    long int maxSum =0;
    vector<int> maxSumSubArray;
    vector<int> currentSumSubArray;
    for(int i=0 ; i<A.size() ; i++)
    {  
        
       if((max(currentSum, currentSum+A[i]) == currentSum) && (currentSum!= currentSum+A[i]))
       {   
          if(currentSum==maxSum)
          {
              maxSum = currentSum;
              maxSumSubArray.clear();
              for(int j=0 ; j<currentSumSubArray.size() ; j++)
              {
                  maxSumSubArray.push_back(currentSumSubArray[j]);
              }
              
          }
          
         currentSumSubArray.clear();
         
          currentSum=0;
           
           
       }
       
       else
       {   
           
            currentSum+= A[i];
           currentSumSubArray.push_back(A[i]);
           
           if(maxSum<=currentSum)
           {  
               maxSum=currentSum;
           }
       }
       
    }
    
    if(currentSum == maxSum)
    {
        if(currentSumSubArray.size() >= maxSumSubArray.size())
          {
              maxSum = currentSum;
              maxSumSubArray.clear();
              for(int j=0 ; j<currentSumSubArray.size() ; j++)
              {
                  maxSumSubArray.push_back(currentSumSubArray[j]);
              }
              
          }
        
    }
    
    //int maxSubArraySize = maxSumSubArray.size();
    //maxSumSubArray.insert(maxSumSubArray.begin(),maxSubArraySize);
    
    return maxSumSubArray;
    
    
     
}
