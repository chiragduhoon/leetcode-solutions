class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        int h=0;
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=i+1){
                h=h+1;
            }
        }
        return h;
    }
};