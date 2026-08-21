class Solution {
    public:
        int countsum(vector<int>& arr, int n, int sum,
                     vector<vector<int>>& dp) {

            // No elements left
            if (n == 0) {
                return (sum == 0);
            }

            if (dp[n][sum] != -1)
                return dp[n][sum];

            // Don't take current element
            int notTake = countsum(arr, n - 1, sum, dp);

            int take = 0;

            // Take current element
            if (arr[n - 1] <= sum) {
                take = countsum(arr, n - 1, sum - arr[n - 1], dp);
            }

            return dp[n][sum] = take + notTake;
        }

        int perfectSum(vector<int>& arr, int target) {
            int n = arr.size();

            vector<vector<int>> dp(n + 1,
                                   vector<int>(target + 1, -1));

            return countsum(arr, n, target, dp);
        }
    };