#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int triple_sort(vector<int>b)
{
	vector<int> temp = b;
	bool done = false;
	while(!done)
	{
		done = true;
		for(int i=0 ; i<temp.size()-2 ; i++)
		{
			if(temp[i]>temp[i+2])
			{
				done=false;
				int a = temp[i];
				int x = temp[i+1];
				int c = temp[i+2];
				temp[i+2] = a;
				temp[i+1] = x;
				temp[i] = c;
			}
		}

			if(done==false)
		{
			if(temp[temp.size()-3]<=temp[temp.size()-2])
			{
				if(temp[temp.size()-2]<=temp[temp.size()-1])
				{
					return -1;
				}

				else
				{
					/*vector<int> :: iterator indx = lower_bound(b.begin(),b.end(),temp[temp.size()-2]);
					int pos = indx - b.begin();
					return pos; */

				return temp.size()-2;

				}
			}

			else
			{     
				   /*vector<int> :: iterator indx1 = lower_bound(b.begin(),b.end(),temp[temp.size()-3]);
					int pos1 = indx1 - b.begin();
					cout<<temp[temp.size()-3]<<endl;
					return pos1;*/
				
				return (temp.size()-3);
			}
		}

     }


  return -1 ;

}

int main()
{

	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		int a;
		cin>>a;
		vector<int> b;

		for(int j=0 ; j<a ; j++)
		{
			int element;
			cin>>element;
			b.push_back(element);
		}

		int result = triple_sort(b);

		  if(result == -1)
		{cout<<"Case #"<<i+1<<":"<<" "<<"OK"<<endl;
		}
		else
		{
			cout<<"Case #"<<i+1<<":"<<" "<<result<<endl;
		}




	}
	return 0;
}