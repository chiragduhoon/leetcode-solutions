class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0){
            return ans;
        }
        int start;
        int end;
        if(k>0){
            start=1;
            end=k;
        }
        else{
            start=n+k;
            end=n-1;
            k=-k;
        }
        
        int windowSum=0;
        for(int i=start;i<=end;i++){
            windowSum+=code[i];
        }
        ans[0]=windowSum;
        for(int i=1;i<n;i++){
            
            windowSum=windowSum-code[start%n];
            start++;
            end++;
            windowSum=windowSum+code[end%n];
            ans[i]=windowSum;
        }
        return ans;
    }
};