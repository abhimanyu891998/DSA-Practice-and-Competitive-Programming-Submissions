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

  static bool sortFunc(Interval &i1, Interval &i2) {
      return i1.start < i2.start;
  }
  static bool checkConflict(vector<Interval> &arr1) {

    sort(arr1.begin(), arr1.end(), sortFunc);
    int start, end;

    start = arr1[0].start;
    end = arr1[0].end;

    int i =1;

    while



  }
};

void Logger(vector<Interval> i1) {
    bool result = IntervalsIntersection::checkConflict(i1);
    cout << "Conflict results ";
    cout<<boolalpha<<result;
    cout << endl;
}

int main(int argc, char *argv[]) {
  vector<Interval> input1 = {{1, 3}, {3, 6}, {2, 9}};
  vector<Interval> input2 = {{2, 3}, {5, 7}};            
  Logger(input1);
  Logger(input2);

  vector<Interval> input3 = {{1, 3}, {5, 7}, {9, 12}};
  vector<Interval> input4 = {{5, 10}};

  Logger(input3);
  Logger(input4);

  return 0;

  }

