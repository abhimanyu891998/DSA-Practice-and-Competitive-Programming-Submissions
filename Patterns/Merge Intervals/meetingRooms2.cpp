/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */


    struct cmp1{
        bool operator()( Interval &a,Interval &b) //If the parameter here is Node*, I don’t know why
    {
        return a.end > b.end; //Custom sort from small to large
    };
    }; 
    int minMeetingRooms(vector<Interval> &intervals) {
        // Write your code here
        if(intervals.size() == 0) {
            return 0;
        }

        int ctr = 1;

        sort(intervals.begin(), intervals.end(), [](Interval &x, Interval &y){ return x.start<y.start;});

        priority_queue<Interval,vector<Interval>,cmp1> qu;

        qu.push(intervals[0]);

        int i =1;
        while(i<intervals.size()) {
            if(intervals[i].start > (qu.top()).end) {
                qu.pop();
           
            }

            qu.push(intervals[i]);
            i++;

        }

        return qu.size();
    }
};