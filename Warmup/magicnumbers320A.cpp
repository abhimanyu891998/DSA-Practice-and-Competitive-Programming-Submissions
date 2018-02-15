#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;

int main()
{
   long int n;
   cin>>n;
   string a = to_string(n);



   
   for(int i=0 ; i<a.length(); i++)
   {
   	 int temp = a[i]-'0';
   	if(temp!= 1 && temp!=4)
   	{   
        
   		cout<<"NO";
   		return 0;
   	}

   	else if(temp==4 && (a[i+1]-'0')==4 && (a[i+2]-'0')==4)
   	{
   		cout<<"NO";
   		return 0;
   	}

   	else if((a[0]-'0')==4)
   	{
   		cout<<"NO";
   		return 0;
   	}
   }

   cout<<"YES";
   return 0;


}