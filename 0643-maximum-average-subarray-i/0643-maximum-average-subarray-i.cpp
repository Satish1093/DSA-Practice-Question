class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n = nums.size();
        int total = 0;
        for (int i = 0; i < k; i++) {
            total += nums[i];
        }

        int maxi = total;

        for (int i = k; i < n; i++) {
            total += nums[i];
            total -= nums[i - k];

            maxi = max(maxi, total);
        }

        return (double)maxi / k;
    }
};