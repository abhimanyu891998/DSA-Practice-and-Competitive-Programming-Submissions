#include<iostream>
#include<string>
#include<locale>

using namespace std;

int main()
{   
	string a;
	cin>>a;
	bool b = true;
	for(int i= 1 ; i<a.length(); i++)
	{
		if(!isupper(a[i]))
		{
          b=false;
		}
	}

	if(b==true)
	{
		string temp;
		if(isupper(a[0]))
		{temp+= tolower(a[0]);}
	    else
	    {
	    	temp+=toupper(a[0]);
	    }
		for(int i=1; i<a.length(); i++)
		{
			temp+= tolower(a[i]);
		}

		cout<<temp;
	}

	else
	{
		cout<<a;
	}
	


	return 0;
}