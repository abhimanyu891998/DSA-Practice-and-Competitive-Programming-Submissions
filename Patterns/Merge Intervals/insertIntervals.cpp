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

class InsertInterval {
 public:
  static vector<Interval> insert(const vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> mergedIntervals;
    // TODO: Write your code here
    auto it = intervals.begin();
    Interval interval = *it;
    int start = interval.start;
    int end = interval.end;
    //Finding the place for the interval
    while(interval.end < newInterval.start && it!= intervals.end()) {
        mergedIntervals.push_back(Interval(start, end));
        it++;
        interval = *it;
        start = interval.start;
        end = interval.end;
    }

    start = newInterval.start;
    end = newInterval.end;

    while(it!=intervals.end()) {
        interval = *it++;
        if(interval.start <= end) {
            start = min(start, interval.start);
            end = max(end, interval.end);
        } else {
            mergedIntervals.push_back(Interval(start,end));
            start = interval.start;
            end = interval.end;
        }
    }

    mergedIntervals.push_back(Interval(start,end));

    return mergedIntervals;
  }
};

int main(int argc, char *argv[]) {
  vector<Interval> input = {{1, 3}, {5, 7}, {8, 12}};
  cout << "Intervals after inserting the new interval: ";
  for (auto interval : InsertInterval::insert(input, {4, 6})) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
  cout << endl;

  cout << "Intervals after inserting the new interval: ";
  for (auto interval : InsertInterval::insert(input, {4, 10})) {
    cout << "[" << interval.start << "," << interval.end << "] ";
    
  }
  cout << endl;

  input = {{2, 3}, {5, 7}};
  cout << "Intervals after inserting the new interval: ";
  for (auto interval : InsertInterval::insert(input, {1, 4})) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
  cout << endl;
}