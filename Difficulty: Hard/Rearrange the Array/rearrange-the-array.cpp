#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minOperations(vector<int> &b) {
        int n = b.size();
        vector<bool> visited(n, false);
        
        // Array to store the maximum exponent of each prime factor
        // Maximum possible cycle length is 'n'
        vector<int> max_exp(n + 2, 0);
        
        // Step 1: Find all cycle lengths
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int len = 0;
                int curr = i;
                
                // Traverse the cycle
                while (!visited[curr]) {
                    visited[curr] = true;
                    // b[curr] is 1-based, we convert it to 0-based index
                    curr = b[curr] - 1;
                    len++;
                }
                
                // Step 2: Prime factorize the cycle length
                int temp = len;
                for (int d = 2; d * d <= temp; d++) {
                    if (temp % d == 0) {
                        int count = 0;
                        while (temp % d == 0) {
                            temp /= d;
                            count++;
                        }
                        // Store the highest power of the prime factor 'd'
                        max_exp[d] = max(max_exp[d], count);
                    }
                }
                // If there is any prime factor strictly greater than sqrt(temp)
                if (temp > 1) {
                    max_exp[temp] = max(max_exp[temp], 1);
                }
            }
        }
        
        
        long long ans = 1;
        long long MOD = 1000000007;
        
        for (int i = 2; i <= n; i++) {
            if (max_exp[i] > 0) {
                for (int j = 0; j < max_exp[i]; j++) {
                    ans = (ans * i) % MOD;
                }
            }
        }
        
        return ans;
    }
};