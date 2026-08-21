class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int d) {
          int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(abs(d)>sum)return 0;
        if((sum + d) % 2 != 0) return 0;
        int s1=(sum+d)/2;
        vector<vector<int>> dp(n + 1, vector<int>(s1 + 1, 0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
             for(int j=0;j<=s1;j++){
                 if(arr[i-1]>j){
                     dp[i][j]=dp[i-1][j];
                 }
                 else{
                     dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
                 }
             }
        }
        return dp[n][s1];
    
    }
};