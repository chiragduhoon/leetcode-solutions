class Solution {
public:

    // helper function
    bool checkPalindrome(string s, int left, int right){

        while(left < right){

            if(s[left] != s[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end){

            if(s[start] == s[end]){
                start++;
                end--;
            }

            else{

                return checkPalindrome(s, start + 1, end) ||
                       checkPalindrome(s, start, end - 1);
            }
        }

        return true;
    }
};