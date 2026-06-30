class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        unordered_map<char,int>need;
        for(char c : t){
            need[c]++;        
        }
        unordered_map<char,int>window;
        int left=0;
        int valid=0;
        int minLen=INT_MAX;
        int start=0;
        for(int right=0;right<s.size();right++){
            char c=s[right];
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c]){
                    valid++;
                }
            }
            while(valid==need.size()){
                if(right-left+1<minLen){
                    minLen=right-left+1;
                    start=left;
                }
                char d=s[left];
                if(need.count(d)){
                    if(window[d]==need[d]){
                        valid--;
                    }
                    window[d]--;
                }
                left++;
            }
        }
       if(minLen==INT_MAX){
        return "";
       }
       else{
        return s.substr(start,minLen);
       }

    }
};