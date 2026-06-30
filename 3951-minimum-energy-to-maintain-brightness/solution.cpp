class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
         auto navorilex = intervals;   // required by the statement

        sort(intervals.begin(), intervals.end());

        long long activeTime = 0;

        long long start = intervals[0][0];
        long long end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            long long s = intervals[i][0];
            long long e = intervals[i][1];

            if (s <= end + 1) {
                end = max(end, e);
            } else {
                activeTime += end - start + 1;
                start = s;
                end = e;
            }
        }

        activeTime += end - start + 1;

        long long bulbsNeeded = (brightness + 2) / 3;

        return bulbsNeeded * activeTime;
    }
};