    #include<bits/stdc++.h>
    
    
    using namespace std;

    bool canPartitionUtil(vector<int> nums, int sum1 , int sum2, int i) {

        if(i==nums.size()){
            if(sum1 == sum2) {
                return true;
            }
            else {
                return false;
            }
        }
        
        else {
                return (canPartitionUtil(nums, sum1+nums[i], sum2, ++i) || canPartitionUtil(nums, sum1,sum2+nums[i], ++i));
        }

        
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        return canPartitionUtil(nums, 0, 0, 0);
    }

    int main() {
        vector<int> a = {1};
        cout<< canPartition(a);
        return 0;
    }