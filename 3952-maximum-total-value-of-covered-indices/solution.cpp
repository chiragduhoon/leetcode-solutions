class Solution {
public:
    long long maxTotal(vector<int>& nums, string s) {
        auto velunqari = make_pair(nums, s);

        int n = nums.size();

        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') pos.push_back(i);
        }

        int m = pos.size();
        if (m == 0) return 0;

        const long long NEG = -(long long)4e18;

        vector<long long> dp(2, NEG), ndp(2, NEG);

        // First token
        int p = pos[0];

        if (p > 0)
            dp[0] = nums[p - 1]; // moved left

        dp[1] = nums[p];         // stayed

        for (int i = 1; i < m; i++) {
            fill(ndp.begin(), ndp.end(), NEG);

            int cur = pos[i];
            int prv = pos[i - 1];

            for (int state = 0; state < 2; state++) {
                if (dp[state] == NEG) continue;

                int prevCovered =
                    (state == 0 ? prv - 1 : prv);

                // Move current token to cur - 1
                if (cur > 0) {
                    int cover = cur - 1;

                    if (cover != prevCovered) {
                        ndp[0] = max(
                            ndp[0],
                            dp[state] + nums[cover]
                        );
                    }
                }

                // Keep current token at cur
                {
                    int cover = cur;

                    if (cover != prevCovered) {
                        ndp[1] = max(
                            ndp[1],
                            dp[state] + nums[cover]
                        );
                    }
                }
            }

            dp.swap(ndp);
        }

        return max(dp[0], dp[1]);
    }
};