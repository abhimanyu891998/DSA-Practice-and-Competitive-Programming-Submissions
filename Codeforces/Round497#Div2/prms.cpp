#include<bits/stdc++.h>
using namespace std;

int main()
{
    int primenos[4] = {2,3,5,7};
    
    int n;
    cin>>n;
    int i=0; 
    while(i<n)
    {   
        bool flags = false;
        int x;
        int ctr=0;
        cin>>x;
        int temp = x;
        while(temp>0)
        {
            for(int j=3 ; j>=0 ; j--)
            {
                if(primenos[j]<=temp)
                {
                    temp-= primenos[j];
                    ctr++;
                    j=3;
                    
                }
            }
            
            if(temp==0)
            {
               flags=true;
               
                
            }
            
        }
        
        if(flags==true)
        {
            cout<<ctr<<endl;
        }
        
        else
        {
            cout<<-1<<endl;
        }
        
    }
}