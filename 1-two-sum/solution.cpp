class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp;
        for(int i=0;i<nums.size();i++){
            temp=target-nums[i];
            for(int j=1;j<nums.size();j++){
                if(temp==nums[j] && i!=j){
                    return {i,j};
                }
                
            }
        }
        
  
    return{};
                }
};
