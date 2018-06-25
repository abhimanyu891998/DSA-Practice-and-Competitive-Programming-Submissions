#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


int calcdamage(vector<char>input)
{
	int damage=0 ; int strength=1;
	for(int i=0 ; i<input.size();i++)
	{
		if(input[i]=='C')
		{
			strength*=2;
		}
		else
		{
			damage+= strength;
		}
	}

	return damage;
}




int main()
{  
	int n;
	cin>>n;
	for(int i=0 ; i<n ; i++)
	{
		int d ;string p;
		cin>>d;
		cin>>p;
		vector<char> input;
		for(int j=0 ; j<p.length(); j++)
		{
			input.push_back(p[j]);
		}
		

		int result;
		int swaps = 0 ;
		int damage = calcdamage(input);
		
		
		while(damage>d && swaps!=-1)
		{
            

			for(int k= input.size()-1 ; k>0 ; k--)
			{
				if(input[k]=='S' && input[k-1]=='C')
				{
					input[k-1] = 'S';
					input[k] = 'C';
					damage = calcdamage(input);
					

					
					swaps++;

					break;
				}

				if((k-1)==0 && (damage>d))
					{
					   swaps = -1;	
					}
			}

		}
      
      if(swaps == -1)
		{cout<<"Case #"<<i+1<<":"<<" "<<"IMPOSSIBLE"<<endl;
		}
		else
		{
			cout<<"Case #"<<i+1<<":"<<" "<<swaps<<endl;
		}
		

		
	}

	return 0;
}