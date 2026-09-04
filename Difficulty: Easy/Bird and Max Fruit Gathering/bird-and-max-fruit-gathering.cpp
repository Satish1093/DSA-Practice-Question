class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
  int n = arr.size();

                   if (m >= n) {
                       long long sum = 0;
                       for (int x : arr) {
                           sum += x;
                       }
                       return sum;
                   }

                   long long sum = 0;

                   
                   for (int i = 0; i < m; i++) {
                       sum += arr[i];
                   }

                   long long maxi = sum;

                
                   for (int i = m; i < n + m - 1; i++) {
                       sum -= arr[(i - m) % n];
                       sum += arr[i % n];

                       maxi = max(maxi, sum);
                   }

                   return maxi;
        
    }
};