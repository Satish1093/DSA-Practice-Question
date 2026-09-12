class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
      unordered_map<long long, int> mp;

             long long sum = 0;
             int maxLen = 0;

             for (int i = 0; i < arr.size(); i++) {
                 sum += arr[i];

                 // Subarray starts from index 0
                 if (sum == k) {
                     maxLen = i + 1;
                 }

                 // Find previous prefix sum = sum - k
                 if (mp.find(sum - k) != mp.end()) {
                     maxLen = max(maxLen, i - mp[sum - k]);
                 }

                 // Store only the first occurrence
                 if (mp.find(sum) == mp.end()) {
                     mp[sum] = i;
                 }
             }

             return maxLen;
    }
};