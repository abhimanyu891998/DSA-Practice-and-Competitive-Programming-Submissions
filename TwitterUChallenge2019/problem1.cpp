#include <iostream>
#include<sstream>

using namespace std;


// Complete the decode function below.
string decode(string encoded) {

    string output = "";
    reverse(encoded.begin(),encoded.end());
    for(int i=0;i<encoded.length() ; i++)
    {
        string asciiInt = "";
        if(encoded[i]== '1')
        {

            asciiInt += encoded[i];
            asciiInt += encoded[i+1];
            asciiInt += encoded[i+2];
            i+=2;
        }

        else
        {
            asciiInt += encoded[i];
            asciiInt += encoded[i+1];
            i++;
        }

        stringstream ss(asciiInt);
        int asciiInteger=0;
        ss>>asciiInteger;


        output+= (char)asciiInteger;

    }

    return output;

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string encoded;
    getline(cin, encoded);

    string res = decode(encoded);

    fout << res << "\n";

    fout.close();

    return 0;
}
