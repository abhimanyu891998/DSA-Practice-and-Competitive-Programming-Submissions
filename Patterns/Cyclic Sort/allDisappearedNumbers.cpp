class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> op;
        
        int i=0;
        
        while(i<nums.size()) {
            
            if(nums[i]!=i+1 and nums[i]!=nums[nums[i]-1]) {
                int temp = nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i] = temp;
                   i++;
            }
            else {
            }
         
        }
        
        i =0;
        
        for(int &a : nums) {
            if(a!= i+1) {
                op.push_back(i+1);
            }
            i++;
        }
        
        
        return op;
    }
};