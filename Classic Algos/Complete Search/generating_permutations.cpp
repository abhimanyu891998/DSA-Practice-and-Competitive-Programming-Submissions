//Using recursion
#include<bits/stdc++.h>

using namespace std;


vector<int> permutation;
vector<int> input;
vector<bool> chosen;
 int n;

void gen_perms()
{
    if(permutation.size == n)
    {

        for(auto a: permutation)
        {
            cout<<a<<' ';
        }

        cout<<endl;

        return ;

    }
    
    else{
    for(int i=0 ; i<n ; i++)
    {
        if(chosen[i]==true)continue;
        chosen[i]=true;
        permutation.push_back(input[i]);
        gen_perms();
        chosen[i]=false;
        permutation.pop_back();

    }
    }

}


int main()
{
  
   cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       int temp;
       cin>>temp;
       input.push_back(temp);
   }

   gen_perms();
}