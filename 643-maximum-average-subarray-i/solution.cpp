class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int u=0;
        for(int i=0;i<k;i++){
            u=u+nums[i];
           
        }
       
       int maxavg=u;;
       for(int i=k;i<nums.size();i++){
        u=u-nums[i-k]+nums[i];
        maxavg=max(maxavg,u);
       }
    
    return (double) maxavg/k;
    }
    };