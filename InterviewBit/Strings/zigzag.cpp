string Solution::convert(string A, int B) {

string output = "";
int j = 0; 
int i=0;
output+= A[i];
i+= (2*((B-1)-j));
char current = 'f';
int first = 2*((B-1)-j);
int second = 2*(j-0);

if(B==1)
{
    return A;
}

else{
while(j<B)
{
   
    
    

    if(i<A.length())
    {   
        if(current=='f')
        {
            
            current = 's';
            if(first!=0)
            {output+= A[i];}
            i+=second;
            
        }
        
        else
        {
            
            current = 'f';
            if(second!=0)
            {output+= A[i];}
            i+=first;
        }
        
    }
    
    else
    {
        j++;
        if(j==B)
        {
            break;
        }
        i=j;
        if(i<A.length())
        {output+= A[i];}
        first = 2*((B-1)-j);
        second = 2*(j-0);
        i+=first;
        
        
        current = 'f';

    }
    
}





return output;

}


}