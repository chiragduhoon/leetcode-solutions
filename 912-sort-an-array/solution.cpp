class Solution {
public:
 vector<int> sortArray(vector<int>& nums) {
        divide(nums, 0, nums.size() - 1);
        return nums;
    }

    void divide(vector<int>& nums, int small, int large) {
        if (small < large) {
            int mid = (small + large) / 2;

            divide(nums, small, mid);
            divide(nums, mid + 1, large);
            Merge(nums, small, mid, large);
        }
    }

    void Merge(vector<int>& nums, int small, int mid, int large) {
        int x = small;
        int y = mid + 1;
        int k = 0;

        int temp[100000];

        while (x <= mid && y <= large) {
            if (nums[x] < nums[y]) {
                temp[k] = nums[x];
                x++; k++;
            } else {
                temp[k] = nums[y];
                y++; k++;
            }
        }

        while (x <= mid) {
            temp[k++] = nums[x++];
        }

        while (y <= large) {
            temp[k++] = nums[y++];
        }

        int m=0;
        for (int x = small; x<=large ; x++) {
            nums[x] = temp[m];
            m++;
        }
    }
};