class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index, vector<int>&nums, vector<int>&temp) {
        if (index == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        solve(index + 1, nums, temp);

        temp.pop_back();
        int count = index + 1;
        while (count < nums.size() && nums[count] == nums[count - 1]) {
            count++;
        }
        solve(count, nums, temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        solve(0, nums, temp);
        return ans;
    }
};
