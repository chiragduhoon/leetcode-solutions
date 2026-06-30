class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(char ch : magazine){
            mp[ch]=mp[ch]+1;
        }
        for(char ch : ransomNote){
            if(mp[ch]==0){
                return false;
            }
            else{
                mp[ch]=mp[ch]-1;
            }
        }
        return true;
    }
};