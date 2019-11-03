vector<string> combiUtil(map<char, vector<char> digitMapping , vector<string>& output, string A)
{

    if(A.length() == 0)
    {
        return ' ';
    }

    if(A.length() == 1)
    {
        return digitMapping[A[0]];
    }


    for char ch : digitMapping[A[0]]
    {

    for string a : combiUtil(digitMapping, output, A.substr(1))
    {
       string s = a + ch;
       output.push_back(s);
    }

    }

    return output;


}


vector<string> Solution::letterCombinations(string A) {
    map<char, vector<char>> digitMapping;
    vector<string> output;
    digitMapping['0']  = ['0'];
    digitMapping['1'] = ['1'];
    digitMapping['2'] = ['a', 'b' , 'c'];
    digitMapping['3'] = ['d', 'e', 'f'];
    digitMapping['4'] = ['g', 'h', 'i'];
    digitMapping['5'] = ['j', 'k', 'l'];
    digitMapping['6'] = ['m', 'n', 'o'];
    digitMapping['7'] = ['p', 'q', 'r', 's'];
    digitMapping['8'] = ['t', 'u', 'v'];
    digitMapping['9'] = ['w', 'x', 'y', 'z'];

    vector<string> result = combiUtil(digitMapping, output, A);

    return result;
}