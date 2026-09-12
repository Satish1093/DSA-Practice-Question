class Solution {
  public:
    int maxProduct(vector<int> &arr, int k) {
       int n = arr.size();

          // dp[j] = maximum product using j elements
          // mn[j] = minimum product using j elements
          vector<long long> mx(k + 1, LLONG_MIN);
          vector<long long> mn(k + 1, LLONG_MAX);

          mx[0] = mn[0] = 1;

          for (int x : arr) {
              for (int j = k; j >= 1; j--) {
                  if (mx[j - 1] != LLONG_MIN) {
                      long long p1 = mx[j - 1] * x;
                      long long p2 = mn[j - 1] * x;

                      mx[j] = max({mx[j], p1, p2});
                      mn[j] = min({mn[j], p1, p2});
                  }
              }
          }

          return mx[k];
    }
};