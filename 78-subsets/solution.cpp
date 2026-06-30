class Solution {
public:
    void backtrack(const vector<int>& nums, int i, vector<int>& cur, vector<vector<int>>& res){
        if(i == (int)nums.size()){
            res.push_back(cur);
            return;
        }
        // include nums[i]
        cur.push_back(nums[i]);
        backtrack(nums, i+1, cur, res);
        cur.pop_back();
        // exclude nums[i]
        backtrack(nums, i+1, cur, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        backtrack(nums, 0, cur, res);
        return res;
    }
};
