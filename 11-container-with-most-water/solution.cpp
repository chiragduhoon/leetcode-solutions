class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=0;
        int area=0;
        while(left<right){
            int breadth=abs(left-right);
            area=min(height[left],height[right])*breadth;
            ans=max(ans,area);
            if(height[left]<height[right]){
                left++;
            }  
            else{         
            right--;
            }
        }
        return ans;

    }
};