//http://codeforces.com/contest/1040/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr[20];
    int cost=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

   

    for(int i=0 ; i<=n/2 ; i++)
    {
        if(arr[i]==arr[n-i-1])
        {    
           if(arr[i]==2 || arr[n-i-1]==2) 
           {if((i!= (n-i-1)) && (arr[i]==2))
           {
               arr[i]=min(a,b);
               cost+=min(a,b);
               arr[n-i-1]=min(a,b); 
               cost+= min(a,b);
           }

           else if((i!= (n-i-1)) && arr[i]!=2)
           {
            continue;
           }

           else
           {
            arr[i]=min(a,b);
            cost+=min(a,b);
           }

          } 
        }

        else
        {   
            if(arr[i]!=2 && arr[n-i-1]!=2)
            {
                cout<<-1;
                return 0;
            }

            else
            {
                if(arr[i]==0 || arr[n-i-1]==0)
                {
                    cost+=a;
                    if(arr[i]==0)
                    {
                        arr[n-i-1]=0;
                    }
                    else
                    {
                        arr[i]=0;
                    }
                }
                else
                {
                    cost+=b;
                    if(arr[i]==1)
                    {
                        arr[n-i-1]=1;
                    }
                    else
                    {
                        arr[i]=1;
                    }
                }
            }



        }
    }

    cout<<cost;

    return 0;

}