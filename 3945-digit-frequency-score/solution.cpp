class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;
        while(n>0){
            int digit=n%10;
            mp[digit]++;
            n=n/10;
        }
        int out=0;
        for(auto it : mp){
            out=out+it.first*it.second;
        }
        return out;
    }
};