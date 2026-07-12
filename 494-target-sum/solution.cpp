class Solution {
public:
    void solve(int index, vector<int>& nums, int target, int& count,int sum) {
       
        
        if (index == nums.size()) {
           if(sum==target){
            count++;
           }
           return;
        }
        solve(index+1,nums,target,count,sum+nums[index]);

        solve(index+1,nums,target,count,sum-nums[index]);
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        int count = 0;
        solve(0,nums,target,count,sum);
        return count;
    }
};