#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Interval {
 public:
  int start = 0;
  int end = 0;

Interval(int start, int end) {
    this->start = start;
    this->end = end;
  }
};

bool sortFunc(Interval &i1, Interval &i2) {
      return i1.start < i2.start;
  }

vector<Interval> freeTime (vector<vector<Interval>> &intervals){
    vector<Interval> mergedInterval;
    vector<Interval> output;
    for(auto a: intervals) {
        for(auto b: a) {
            mergedInterval.push_back(b);
        }
    }

    sort(mergedInterval.begin(), mergedInterval.end(), sortFunc);

    int latestEnd = INT_MIN;

    int start; int end; 
    start = mergedInterval[0].start;
    end = mergedInterval[0].end;
    latestEnd = mergedInterval[0].end;

    int i =1;
    while(i<mergedInterval.size()) {
        if(mergedInterval[i].start >= end) {
            output.push_back(Interval(latestEnd, mergedInterval[i].start));
        }

        latestEnd = max(latestEnd, mergedInterval[i].end);
        start = mergedInterval[i].start;
        end = mergedInterval[i].end;
        i++;
    }

    return output;
    
}

void outputFunc(vector<Interval> &op) {
        for(auto i: op) {
        cout<<"{"<<i.start<<" "<<i.end<<"}"<<endl;
    }
}

int main() {
    vector<vector<Interval>> intervals = {{{1,3}, {6,7}}, {{2,4}}, {{2,5},{9,12}}};

    vector<Interval> op1 = freeTime(intervals);
 
    vector<vector<Interval>> intervals2 = {{{1,2},{5,6}},{{1,3}},{{4,10}}};

    vector<Interval> op2 = freeTime(intervals2);
    outputFunc(op1);
    outputFunc(op2);


    return 0;

}