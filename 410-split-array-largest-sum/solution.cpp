class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left=*max_element(nums.begin(),nums.end());
        int right=accumulate(nums.begin(),nums.end(),0);
        while(left<right){
            int mid=left+(right-left)/2;
            int pieces=1;
            int sum=0;
            for(int i : nums){
                if(sum+i>mid){
                    pieces++;
                    sum=i;
                }
                else{
                    sum+=i;
                }
            }
            if(pieces<=k){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};