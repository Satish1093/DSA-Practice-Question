class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for (int row = 0; row < numRows; row++) {
            long long ans = 1;
            vector<int> resrow;

            resrow.push_back(1);

            for (int col = 1; col <= row; col++) {
                ans = ans * (row - col + 1);
                ans = ans / col;

                resrow.push_back(ans);
            }

            res.push_back(resrow);
        }

        return res;
    }
};