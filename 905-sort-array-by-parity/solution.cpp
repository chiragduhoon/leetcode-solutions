class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int n=a.size();
        int temp;
        int i;
        int j;
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                if(a[j]%2!=0){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        return a;
    }
};