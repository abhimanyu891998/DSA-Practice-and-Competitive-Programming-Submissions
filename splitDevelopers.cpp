#include<bits/stdc++.h>

using namespace std;

// string simulate(int preferenceYan[], int preferenceKevin[4], int &n) {

//     vector<char> op(n+1,'\0');


//     bool toggleFlag = true;

//     int i,j=0;

//     for(int k=0; k<n; k++){

//         if(toggleFlag) {

//             if(i<n) {
//                 while(op[preferenceYan[i]]!='\0') {
//                 i++;
//             }
//             if(i<n) {
//                 op[preferenceYan[i]] = 'Y';
//                 i++;
//             }

//             }


//             toggleFlag = !toggleFlag;
//         }

//         else {

//                 if(j< n ) {
//                 while(op[preferenceKevin[j]]!='\0' && j<n) {
//                     cout<<j<<endl;
//                     j++;
//                 }
//                 cout<<j<<endl;
//                 if(j<n) {
//                     op[preferenceYan[j]] = 'K';
//                     j++;
//             }


//                 }
//             toggleFlag= !toggleFlag;
//         }
//     }


//     for(auto a: op) {
//         cout<<a<<endl;
//     }


//     return "";

// }

string simulate (vector<int> preferenceYan, vector<int> preferenceKevin) {

    int n = preferenceKevin.size();
    vector<int> op(n,-1);

 
    int i =0; int j=0;
    bool toggle = true;

    while(i<n || j<n) {
        if(toggle==true) {
            if(i<n) {
              
                while(op[preferenceYan[i]-1]!=-1 && i<n) {
                    i++;
                }
                
                if(i<n) {
                    op[preferenceYan[i]-1]= 1;
                }
            }

            toggle = !toggle;
          
        } else {
                if(j<n) {
                while(op[preferenceKevin[j]-1]!=-1 && j<n) {
                    j++;
                }
                if(j<n) {
                    op[preferenceKevin[j]-1]= 2;
                }
            }

            toggle = !toggle;

        }
    }

    string ops;

    for(auto a: op) {
       if(a==1) {
           ops+= "Y";
       } else {
           ops+="K";
       }
    }

    return ops;

}


int main()
{
	// your code goes here
    vector<int> preferenceYan = {1,2,3,4};
    vector<int> preferenceKevin = {4,3,2,1};

    vector<int> preferenceYan1 = {1,2,3,4};
    vector<int> preferenceKevin1 = {1,2,3,4};

    vector<int> preferenceYan2 = {3,2,1};
    vector<int> preferenceKevin2 = {1,3,2};


    string s = simulate(preferenceYan, preferenceKevin);
    cout<<s<<endl;

    string s1 = simulate(preferenceYan1, preferenceKevin1);
    cout<<s1<<endl;

    cout<<simulate(preferenceYan2, preferenceKevin2)<<endl;

	return 0;
}