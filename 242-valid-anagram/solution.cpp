class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            mp[s[i]]=mp[s[i]]+1;
            
            
        }
        for(int j=0;j<t.size();j++){
            mp[t[j]]=mp[t[j]]-1;
            if(mp[t[j]]<0){
                return false;
            }
        }
        return true;
    }
};