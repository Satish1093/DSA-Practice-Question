class Solution {
  public:
    long long  f(int N, int r[], int g[], int b[],int prev, int i,vector<vector<long long>>&dp){
        if(i==N)return 0;
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        long long  take=1e18;
        for(int j=0;j<3;j++){
            long long toadd;
            if(j==0)toadd = r[i];
            if(j==1)toadd = g[i];
            if(j==2)toadd = b[i];
            if(prev!=j){
                take = min(take,toadd+min(take,f(N,r,g,b,j,i+1,dp)));
            }
        }
        return dp[i][prev+1]=take;
    }
    long long int distinctColoring(int N, int r[], int g[], int b[]){
    
        vector<vector<long long>>dp(N+1,vector<long long>(5,-1));
        long long int ans =  f(N,r,g,b,-1,0,dp);
        return ans; 
        
    }
};