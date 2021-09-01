class Solution {
public:
    
    struct Item {
        int val;
        int c;
        int r;
        
        Item(int val, int i, int r) : val(val), c(i), r(r) {}
    
    };
    
    struct Compare {
    
        bool operator()(Item &a, Item &b){
            return a.val > b.val;
        }
        
    };
    
    
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        priority_queue<Item, vector<Item>, Compare> pq;
        
        int minR=INT_MAX;
        int maxR=INT_MIN;
        int minRange;
        int minU = INT_MAX;
        int maxU = INT_MIN;
        vector<int> op;
        
        for(int i =0 ; i<nums.size() ; i++) {
            pq.push(Item(nums[i][0], 0, i));
            maxR = max(nums[i][0], maxR);
        }
        
        
        auto minEle = pq.top();
        minR = minEle.val;
        minU = minR;
        maxU = maxR;
        minRange = maxR - minR + 1;
        
        
        while(pq.size()== nums.size()) {
            minEle = pq.top();
            pq.pop();
            
            if(minEle.c+1< nums[minEle.r].size()) {
                pq.push(Item(nums[minEle.r][minEle.c+1], minEle.c+1, minEle.r));
                maxR = max(maxR, nums[minEle.r][minEle.c+1]);
                minEle = pq.top();
                minR = minEle.val;
                if((maxR-minR+1)<minRange) {
                minU = minR;
                maxU = maxR;
                minRange = maxR-minR+1;
                }      
                
            }
        }
        
        
        
        if(minU!=INT_MAX && maxU!= INT_MIN) {
            op.push_back(minU);
            op.push_back(maxU);
        }
        
        return op;
    }
};