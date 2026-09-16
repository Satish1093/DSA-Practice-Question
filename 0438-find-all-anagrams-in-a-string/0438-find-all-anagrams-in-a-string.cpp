class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.length();
        int k = p.length();
        if(n < k) return {};

        ans.reserve(n - k + 1);

        int req[26]{};
        for(int i = 0; i < k; ++i) {
            ++req[p[i]-'a'];
        }

        int curr[26]{}; 
        for(int i = 0; i < k; ++i) {
            ++curr[s[i]-'a'];
        }
        
    
        if(equal(curr, curr + 26, req)) ans.push_back(0);

        int r = k; 

        for(int l = 1; l <= n - k; ++l) {
            --curr[s[l-1]-'a'];
            ++curr[s[r]-'a'];

            if(equal(curr, curr + 26, req)) ans.push_back(l);

            ++r;
        }

        return ans;
    }
};