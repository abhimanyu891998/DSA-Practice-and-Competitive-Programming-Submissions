#include<bits/stdc++.h>
using namespace std;


vector < long > RedIsDanger(vector < int > capacity_array) {
    vector<long> output(1);
    output.push_back(1);
    for(long i=0 ; i<capacity_array.size() ; i++)
    {
        long capacity = capacity_array[i];
        vector<long> arrCapacity(capacity+1);
        for(int j=0 ; j<arrCapacity.size() ; j++)
        {
            arrCapacity.push_back(0);
        }
        
        arrCapacity[0]=1;
        arrCapacity[1]=2;
        
        for(long j=2; j<arrCapacity.size() ; j++)
        {
            arrCapacity[j]  = arrCapacity[j-1] + arrCapacity[j-2];
        }
        
        cout<<arrCapacity[capacity]<<endl;
        //fibonacci(capacity);
        
    }
    
    return output;

}


int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    vector < long > res;
    
    int _capacity_array_size = 0;
    cin >> _capacity_array_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _capacity_array;
    int _capacity_array_item;
    for(int _capacity_array_i=0; _capacity_array_i<_capacity_array_size; _capacity_array_i++) {
        cin >> _capacity_array_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        _capacity_array.push_back(_capacity_array_item);
    }
    
    res = RedIsDanger(_capacity_array);
    for(int res_i=0; res_i < res.size(); res_i++) {
    	fout << res[res_i] << endl;;
    }
    
    fout.close();
    return 0;
}
