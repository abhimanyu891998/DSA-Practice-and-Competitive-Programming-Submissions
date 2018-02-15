#include<iostream>
#include<algorithm>

using namespace std;

int main()
{   
	int b;
	cin>>b;

	string a;
	cin.ignore();
	getline(cin,a);
	string r;

	

	if(a.length()%b!=0)
	{
         cout<< -1;
         return 0;
	}

	else
	{   
        

		sort(a.begin(),a.end());
		for(int i=0 ; i<= a.length()-b ; i+=b)
		{   
			if(a[i]!=a[i+(b-1)])
			{
				cout<<-1;
				return 0;
			}
			else
			{  
               r+=a[i];
			}

		}



        
        
	}
    
    int t = 0 ;
    string temp = r;
    while(t<b-1)
    {   

    	r+=temp;
    	t++;
    }
	
	cout<<r;

	return 0;


}