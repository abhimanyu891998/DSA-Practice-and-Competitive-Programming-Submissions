#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int maxmoney[100005];

int main()
{
    
    while (!cin.eof()) {
    	int cash=-1, N, n[11], D[11];
        cin>>cash>>N;
        if(cash>=0)
        {for (int i = 0; i < N; ++i)
            cin>>n[i]>>D[i];
       
        fill(maxmoney, maxmoney+cash+1, 0);
        // Knapsack
        	for (int i = 0; i < N; ++i) {
            int left = n[i];
           
            while(left>10)
            {
            	 for (int j = 1; j <= left; left -= j, j *= 2)
                    for (int k = cash; k - D[i]*j >= 0; --k)
                        maxmoney[k] = max(maxmoney[k], maxmoney[k-D[i]*j] + D[i]*j);

            }


            for (int j = 0; j < left; ++j)
                for (int k = cash; k - D[i] >= 0; --k)
                    maxmoney[k] = max(maxmoney[k], maxmoney[k-D[i]] + D[i]);
        }
        cout<<maxmoney[cash]<<endl;
    }
    }
}
