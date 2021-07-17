using namespace std;

#include <iostream>
#include <vector>

class Interval {
 public:
  int start = 0;
  int end = 0;

  Interval(int start, int end) {
    this->start = start;
    this->end = end;
  }
};

class IntervalsIntersection {
 public:
  static vector<Interval> merge(const vector<Interval> &arr1, const vector<Interval> &arr2) {
    vector<Interval> result;
    // TODO: Write your code here
    int i =0; 
    int j=0;
    while(i<arr1.size() && j<arr2.size()) {
        Interval i1 = arr1[i];
        Interval i2 = arr2[j];

        if((i1.start>=i2.start && i1.start<=i2.end) || (i2.start>=i1.start && i2.start<=i1.end)) {
            result.push_back(Interval(max(i1.start, i2.start), min(i1.end, i2.end)));
        }

        if(i1.end <i2.end) {
            i++;
        } else {
            j++;
        }
    }

    return result;
    
  }
};

int main(int argc, char *argv[]) {
  vector<Interval> input1 = {{1, 3}, {5, 6}, {7, 9}};
  vector<Interval> input2 = {{2, 3}, {5, 7}};
  vector<Interval> result = IntervalsIntersection::merge(input1, input2);
  cout << "Intervals Intersection: ";
  for (auto interval : result) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
  cout << endl;

  input1 = {{1, 3}, {5, 7}, {9, 12}};
  input2 = {{5, 10}};
  result = IntervalsIntersection::merge(input1, input2);
  cout << "Intervals Intersection: ";
  for (auto interval : result) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
}
