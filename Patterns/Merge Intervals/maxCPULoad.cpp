using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

class Interval {
 public:
  int start = 0;
  int end = 0;
  int load = 0;

  Interval(int start, int end, int load) {
    this->start = start;
    this->end = end;
    this->load = load;
  }
};

class IntervalsIntersection {
 public:
  static int maxCPULoad( vector<Interval> &intervals) {
    int result;
    // TODO: Write your code here
        // sort the intervals by start time
    sort(intervals.begin(), intervals.end(),
         [](Interval &x,  Interval &y) { return x.start < y.start; });

    int start; int end; 
    int maxLoad=INT_MIN; 
    int i=1;
    start = intervals[0].start;
    end = intervals[0].end;
    int load = intervals[0].load;

    while(i<intervals.size()) {
        if(intervals[i].start < end) {
            //merging case
            end = max(end, intervals[i].end);
            load += intervals[i].load;
            
        }

        else {
            start = intervals[i].start;
            end = intervals[i].end;
            load = intervals[i].load;
        } 
        maxLoad = max(maxLoad, load);
       i++;
    }

    return maxLoad;
    
  }
};

int main(int argc, char *argv[]) {
  vector<Interval> input1 = {{1, 4, 3},  {7, 9, 6},{2, 5, 4}} ;
  vector<Interval> input2 = {{6, 7, 10}, {2, 4, 11}, {8, 12, 15}}; 
  int result = IntervalsIntersection::maxCPULoad(input1);
  cout<<result<<endl;
  result = IntervalsIntersection::maxCPULoad(input2);
  cout<<result<<endl;

//   input1 = {{1, 3}, {5, 7}, {9, 12}};
//   input2 = {{5, 10}};
//   result = IntervalsIntersection::merge(input1, input2);
//   cout << "Intervals Intersection: ";
//   for (auto interval : result) {
//     cout << "[" << interval.start << "," << interval.end << "] ";
//   }
}
