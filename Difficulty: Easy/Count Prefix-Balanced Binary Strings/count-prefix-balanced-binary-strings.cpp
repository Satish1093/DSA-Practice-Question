class Solution {
  public:
    int prefixStrings(int N) {
        
        int mode = 1000000007;

        vector<long long int> dp(N+1, 0);

        dp[0] = 1;
        dp[1] = 1;

        for(int i=2;i<=N;i++){
            for(int j=0;j<i;j++){
                 (dp[i]+=((dp[j]%mode)*(dp[i-j-1]%mode))%mode)%mode;
            }

        }

        return dp[N]%mode;
    }
};