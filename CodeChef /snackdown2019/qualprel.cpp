#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,k;
        cin>>n>>k;
        vector<long int>scores;
        for(int i=0 ; i<n ; i++)
        {
            long int temp;
            cin>>temp;
            scores.push_back(temp);
        }

        bool sortFunc(long int a , long int b)
        {
            return (a>b);
        }

        sort(scores.begin(),scores.end(), sortFunc);
        int rankingValue = 1;
        int ctr = 1;


        
        for(int i=1 ; i<scores.size() ; i++)
        {
            if(rankingValue<=k)
            {
                if(scores[i]==scores[i-1])
                {
                    ctr++;
                }

                else
                {
                    rankingValue++;
                    if(rankingValue<=k)
                    {ctr++;}
                }
            }

            else
            {
                break;
            }
        }

        cout<<ctr<<endl;
    }

    return 0;
}
