class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size()){
            return ans;
        }
        vector<int>pCount(26,0);
        vector<int>winCount(26,0);
        
        for(char c : p){
            pCount[c-'a']++;
        }
        int k=p.size();
        for(int i=0;i<s.size();i++){
            winCount[s[i]-'a']++;
        
        if(i>=k){
            winCount[s[i-k]-'a']--;
        }
        if(winCount==pCount){
            ans.push_back(i-k+1);
        }
        }
        return ans;
    }
};