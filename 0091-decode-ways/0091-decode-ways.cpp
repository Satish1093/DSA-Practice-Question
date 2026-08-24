vector<int>dp(101,-1);
class Solution {
public:
int helper(string s,int pos){
    int n = s.size();
    if(pos == n)return 1;
    if(s[pos] == '0')return 0;
    if(dp[pos] != -1)return dp[pos];
    int count = helper(s,pos+1);
    if(pos<n-1 && s.substr(pos,2) < "27"){
        count+= helper(s,pos+2);
    }
    return dp[pos] = count;
}
    int numDecodings(string s) {
        int n = s.size();
        fill(dp.begin(),dp.end() ,-1);
        return helper(s,0);
    }
};