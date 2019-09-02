#include<bits/stdc++.h>

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    char lowerSize;
    int x,y;
    
    if(A.size()>B.size())
    {
        lowerSize = 'B';
        x = B.size();
        y = A.size();
    }
    
    else{
            
            lowerSize = 'A';
            x = A.size();
            y = B.size();
    }
    

    
    int low = 0;
    int high = x;
    
    while(low<=high)
    {
        int partitionX = (low+high)/2;
        int partitionY = (x+y+1)/2 - partitionX;
        
    
        
        int maxLeftX = INT_MAX;
        int minRightX = INT_MIN;
        int maxLeftY = INT_MAX;
        int minRightY = INT_MIN;
        if(partitionX>0)
        {   
            if(lowerSize=='A')
            {maxLeftX = A[partitionX - 1];}
            else
            {
                maxLeftX = B[partitionX - 1];
            }
        }
        else
        {
            maxLeftX = INT_MIN;
        }
        
        if(partitionX == x)
        {
            minRightX = INT_MAX;
        }
        else
        {
            if(lowerSize=='A')
            {minRightX = A[partitionX];}
            else
            {
              minRightX = B[partitionX];  
            }
        }
        if(partitionY>0)
        {
            if(lowerSize=='A')
            {maxLeftY = B[partitionY - 1];}
            else
            {
              maxLeftY = A[partitionY - 1];  
            }
        }
        else
        {
            maxLeftY = INT_MIN;
        }
        if(partitionY == y)
        {
            minRightY = INT_MAX;
        }
        else
        {
            if(lowerSize == 'A')
            {minRightY = B[partitionY];}
            else
            {
                minRightY = A[partitionY];
            }
         
        }
        
        
        if((maxLeftX <= minRightY) && (minRightX >= maxLeftY))
        {
                if ((x + y) % 2 == 0)
                    {return ((max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0 ) ;}
                else
                    {return max(maxLeftX, maxLeftY) ;}         
        }
        
        else  if(maxLeftX > minRightY)
        {
        
            high =partitionX - 1;
        }
        else
        
        {
        
            low = partitionX + 1;
        }
        
        
    
        
    }
    
    
    
    
    
}
