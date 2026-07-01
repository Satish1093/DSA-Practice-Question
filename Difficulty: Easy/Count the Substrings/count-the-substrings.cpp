
      class Solution {
public:
    int countSubstring(string s) {
        int n = s.length();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int lower = 0, upper = 0;

            for (int j = i; j < n; j++) {
                if (islower(s[j]))
                    lower++;
                else
                    upper++;

                if (lower == upper)
                    ans++;
            }
        }

        return ans;
    }
};
     