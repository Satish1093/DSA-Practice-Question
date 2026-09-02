class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int maxi = 0;
        int maxcount = 0;

        unordered_map<char, int> mp;

        for (int right = 0; right < n; right++) {
            mp[s[right]]++;

            maxcount = max(maxcount, mp[s[right]]);

            while ((right - left + 1) - maxcount > k) {
                mp[s[left]]--;
                left++;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};