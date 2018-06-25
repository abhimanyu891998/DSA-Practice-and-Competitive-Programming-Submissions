#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0 ; i<n ; i++)
	{   
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
    
    int ctr =0;
    int ctrcheck=0;
	for(int u=0 ; u<arr.size() ; u++)
	{
			
			int j =0;
			while(j<arr.size())
			{   
				if(arr[j]!=0)
				{arr[j] = arr[j] + (-arr[u]);}
				cout<<arr[j]<<endl;
				j++;
				continue;
			}

			

			
            

			for(int k =0 ; k<arr.size() ; k++)
			{
			
				if(arr[k]==0)
				{
					ctrcheck++;
				}
			}

			if(arr[u]!=0)
			{
				ctr++;
			}

			if(ctrcheck==arr.size())
			{
				cout<<ctr;
				return 0;
			}

		
	}

}