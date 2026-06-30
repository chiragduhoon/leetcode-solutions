class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int len=0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!= ' '){
            cout<<s[i];
            len++;
            i--;
        }
        return len;
    }
};