class Solution {
  public:
  
    bool SubsetSum(vector<int>& arr,int n , int sum,vector<vector<int>>&dp) {

if(dp[n][sum] != -1)return dp[n][sum];
        if(n==0)return false;
        if(sum== 0)return true;
        if(arr[n-1] <= sum){
            
            
            
    return dp[n][sum] = SubsetSum(arr, n-1,sum-arr[n-1],dp) || SubsetSum(arr,n-1,sum,dp);
        }else{
            SubsetSum(arr,n-1,sum,dp);
        }
    }
         bool isSubsetSum(vector<int>& arr, int sum) {
             int n = arr.size();
             vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
             for(int i =0;i<=sum;i++){
                 dp[0][i] = false;
             }
             for(int i =0;i<n;i++){
                 dp[i][0] = true;
             }
            
            return dp[n][sum] =  SubsetSum(arr,n,sum,dp);
    }
};