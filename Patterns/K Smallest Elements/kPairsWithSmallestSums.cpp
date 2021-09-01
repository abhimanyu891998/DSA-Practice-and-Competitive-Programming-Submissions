class Solution {
public:
    
    struct Compare {
        
        bool operator() (vector<int> &a, vector<int> &b) {
            return (a[0]+a[1]) < (b[0]+b[1]);
        }
    };
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> op;
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq;
        
        
        for(int i = 0 ; i<nums1.size() ; i++) {
            for(int j=0; j<nums2.size() ; j++) {
                if(pq.size() < k) {
                    vector<int> temp = {nums1[i], nums2[j]};
                    pq.push(temp);
                }
                else {
                    vector<int> topV = pq.top();
                    int currSum = nums1[i] + nums2[j];
                    if(currSum < (topV[0] + topV[1])) {
                        pq.pop();
                         vector<int> temp = {nums1[i], nums2[j]};
                        pq.push(temp);
                    }
                    else break;
                }
            }
        }
        
        while(!pq.empty()) {
            op.push_back(pq.top());
            pq.pop();
        }
        
        reverse(op.begin(), op.end());
        
        
        
        return op;
    }
};