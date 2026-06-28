class Solution {
  public:
    int countStrings(int n, int k) {
         const int MOD = 1000000007;

        vector<vector<vector<long long>>> dp(
            n + 1,
            vector<vector<long long>>(k + 1, vector<long long>(2, 0))
        );

        dp[1][0][0] = 1; 
        dp[1][0][1] = 1; 

        for (int len = 2; len <= n; len++) {
            for (int pairs = 0; pairs <= k; pairs++) {

                dp[len][pairs][0] =
                    (dp[len][pairs][0] + dp[len - 1][pairs][0]) % MOD;

                dp[len][pairs][1] =
                    (dp[len][pairs][1] + dp[len - 1][pairs][0]) % MOD;

                dp[len][pairs][0] =
                    (dp[len][pairs][0] + dp[len - 1][pairs][1]) % MOD;

                if (pairs > 0) {
                    dp[len][pairs][1] =
                        (dp[len][pairs][1] + dp[len - 1][pairs - 1][1]) % MOD;
                }
            }
        }

        return (dp[n][k][0] + dp[n][k][1]) % MOD;
        
    }
};