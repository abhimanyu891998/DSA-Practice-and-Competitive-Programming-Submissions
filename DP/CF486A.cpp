#include<iostream>
#include<cmath>
using namespace std;


long long int fncalc(long long int n)
{

return (((pow(-1,n)*(2*n+1)) -1)/4);


}


int main()
{
	long long int n;
	cin>>n;
	cout<<fncalc(n);

}