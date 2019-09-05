string Solution::countAndSay(int A) {
    if(A==1)
    {
        return "1";
    }
    else
    {
       string previousVal = countAndSay(A-1);
       
       string newVal = "";
       char currentVal = previousVal[0];
       char currentCount = '0';
       char currentCountChar;
       for(int i=0 ; i<previousVal.length() ; i++)
       {
           if(previousVal[i]==currentVal)
           {   
               currentCount++;
           }
           else
           {    
               string toBeAdded = "";
               toBeAdded+= currentCount;
               toBeAdded += currentVal;

               newVal+= toBeAdded;
               currentVal = previousVal[i];
               currentCount= '1';
           }
           
       }
       
    
       newVal += currentCount;
       newVal += currentVal;
       
       return newVal;
       
    }
        
    }

