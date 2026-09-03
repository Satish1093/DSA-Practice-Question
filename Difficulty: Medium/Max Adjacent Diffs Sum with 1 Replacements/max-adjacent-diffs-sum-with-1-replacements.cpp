class Solution {
  public:
    int maxDiffSum(vector<int>& arr) {
   int n = arr.size();

                            if (n <= 1) return 0;

                            int keep = 0;
                            int one = 0;

                            for (int i = 1; i < n; i++) {
                                int newKeep = max(
                                    keep + abs(arr[i] - arr[i - 1]),
                                    one + abs(arr[i] - 1)
                                );

                                int newOne = max(
                                    keep + abs(1 - arr[i - 1]),
                                    one
                                );

                                keep = newKeep;
                                one = newOne;
                            }

                            return max(keep, one);
    }
};