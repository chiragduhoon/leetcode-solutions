class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i;
        int j;
        for(i=0; i<nums.size(); i++){
            mp[nums[i]]=mp[nums[i]]+1;
        }
        for(auto x : mp){
            if(x.second==1){
                return x.first;
            }

        }
        return 0;
    }
};