class Solution {
public:
    int countCommas(int n) {
        int commas = 0;

        for (int i = 1000; i <= n; i++) {
            int x = i;

            while (x >= 1000) {
                commas++;
                x = x / 1000;
            }
        }

        return commas;
    }
};