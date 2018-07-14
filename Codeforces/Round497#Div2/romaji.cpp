#include<bits/stdc++.h>

using namespace std;

int main()
{
	string input;
	getline(cin,input);
    
    bool isVowel[CHAR_MAX] = { false };
    isVowel['a'] = true;
    isVowel['e'] = true;
    isVowel['i'] = true;
    isVowel['o'] = true;
    isVowel['u'] = true;
    isVowel['n'] = true;

    for(int i=0 ; i<input.size() ; i++)
    {
    	if(i==input.size()-1)
    	{
    		if(isVowel[input[i]]==false)
    		{
    			cout<<"NO";
    			return 0;
    		}
    	}

    	else
    	{
    		if(isVowel[input[i]]==false)
    		{
    			if(isVowel[input[i+1]]==false || input[i+1]=='n')
    			{
    				cout<<"NO";
    				return 0;
    			}
    		}
    	}
    }

    cout<<"YES";
    return 0;
}