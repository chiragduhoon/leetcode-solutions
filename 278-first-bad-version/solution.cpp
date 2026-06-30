// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=(left+right);
            if(isBadVersion(mid)==true){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};