class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index,vector<int>& candidates, int target, vector<int>& temp,int sum) {
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target){
            return;
        }
        if(index==candidates.size()){
            return;
        }
        
        temp.push_back(candidates[index]);
        solve(index,candidates,target,temp,sum+candidates[index]);

        temp.pop_back();
        solve(index+1,candidates,target,temp,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        int sum=0;
        solve(0,candidates,target,temp,sum);
        return ans;
    }
};