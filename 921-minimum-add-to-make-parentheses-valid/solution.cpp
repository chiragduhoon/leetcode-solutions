class Solution {
public:
    int minAddToMakeValid(string s) {
        int unmatched = 0;
        int add = 0;
        for (char c : s) {
            if (c == '(') {
                unmatched++;
            } 
            else if (c == ')') {
                if (unmatched > 0) {
                    unmatched--;
                }
                else{
                    add++;
                }
            }
        }
        return add+unmatched;
    }
};