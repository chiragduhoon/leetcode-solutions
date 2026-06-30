class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i ; 
        int j ;
        vector<int> ans ;
        unordered_map<int,int> map1;
        
        for (i=0; i<nums1.size(); i++){
            map1[nums1[i]]=map1[nums1[i]]+1;
        }
        for(i=0 ; i<nums2.size(); i++){
            if(map1.count(nums2[i])){
                ans.push_back(nums2[i]);
            }
            map1.erase(nums2[i]);
        }
         return ans;
        }
       
    
};