#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>a;

void vectreverse(int i, int j)
{

    if(i<j)
    {
       iter_swap(a.begin()+i,a.begin()+j);
       vectreverse(i+1,j-1);
    }

    else
    {   
    	return;
    }

}

int main()
{
	
	int n;
	cin>>n;
	for(int i=0 ; i<n; i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}



	vectreverse(0,a.size()-1);

	for(int i=0 ; i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}


}