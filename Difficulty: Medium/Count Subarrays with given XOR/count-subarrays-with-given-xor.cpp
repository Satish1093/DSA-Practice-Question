class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int currXOR = 0, ans = 0;
              unordered_map<int, int>mp;
              mp[0] = 1;
              for (auto i : arr) {
                  currXOR ^= i;
                  if (mp.find(currXOR^k) != mp.end()) {
                      ans +=mp[currXOR^k];
                  }
                  mp[currXOR]++;
              }
              return ans;
        
    }
};