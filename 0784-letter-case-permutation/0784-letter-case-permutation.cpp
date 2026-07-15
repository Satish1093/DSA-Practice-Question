class Solution {
public:

    void solve(int idx, string &s,
               vector<string> &ans) {

        if (idx == s.size()) {
            ans.push_back(s);
            return;
        }

        if (isdigit(s[idx])) {
            solve(idx + 1, s, ans);
            return;
        }

        s[idx] = tolower(s[idx]);
        solve(idx + 1, s, ans);

        s[idx] = toupper(s[idx]);
        solve(idx + 1, s, ans);
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(0, s, ans);
        return ans;
    }
};