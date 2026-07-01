class Solution {
  public:
    int countSubstring(string S) {
        int n =  S.size(),sum = 0,cnt = 0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i = 0;i<n;i++){
            int var =- 1;
            if(islower(S[i])) var=1;
            sum+=var;
            if(mp.find(sum)!=mp.end()){
                cnt+=mp[sum];
            }
            mp[sum]++;
        }
        return cnt;
        
        
    }
};