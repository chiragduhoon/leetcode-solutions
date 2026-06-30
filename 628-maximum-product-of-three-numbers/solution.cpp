class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        int product;
        int left=0;
        int right=nums.size()-1;
        int product1=nums[left]*nums[left+1]*nums[right];
        int product2=nums[right]*nums[right-1]*nums[right-2];
        product=max(product1,product2);
        
        return product;
    }
};