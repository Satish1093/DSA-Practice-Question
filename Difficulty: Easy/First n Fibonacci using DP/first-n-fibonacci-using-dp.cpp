class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        int MOD = 1000000007;
        vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }
    return fib;

    }
};