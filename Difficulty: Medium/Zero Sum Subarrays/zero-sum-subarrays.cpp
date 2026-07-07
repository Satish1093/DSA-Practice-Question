class Solution {
  public:
    int findSubarray(vector<int> &arr) {
      int presum=0;
        unordered_map<int,int>mp;
        int count=0;
        mp[0]=1;
        int k=0;
        for(int i=0;i<arr.size();i++){
            presum+=arr[i];
            int req=presum-k;
            if(mp.count(req)){
                count+=mp[req];
            }
            
            mp[presum]++;
        }
        return count;
    }
};