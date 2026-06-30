class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        unordered_map<char,int> need;
        for( char c : s1){
            need[c]++;
        }
        unordered_map<char,int>window;
        int n=s1.size();
        for(int i=0;i<s2.size();i++ ){
            char d= s2[i];
            window[d]++;
            
            if(i>=n){
                window[s2[i-n]]--;
                
                if(window[s2[i-n]] == 0){
                 window.erase(s2[i-n]);
                    }
                    }
            if(window==need){
                return true;
            }
        }
        return false;
    }
};