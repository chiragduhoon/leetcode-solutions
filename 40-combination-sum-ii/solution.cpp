class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index, vector<int>& candidates, int target,
               vector<int>& temp, int sum) {

        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (sum > target) {
            return;
        }
        if (index == candidates.size()) {
            return;
        }
        temp.push_back(candidates[index]);

        solve(index + 1, candidates, target, temp, sum + candidates[index]);

        temp.pop_back();

        int count = index + 1;

        while (count < candidates.size() &&
               candidates[count] == candidates[index]) {
            count++;
        }
        solve(count, candidates, target, temp, sum);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        int sum = 0;
        solve(0, candidates, target, temp, sum);
        return ans;
    }
};