class Solution {
public:
    long long countTriplets(vector<int>& arr, int l, int r) {
        sort(arr.begin(), arr.end());

        return countLessEqual(arr, r) - countLessEqual(arr, l - 1);
    }

private:
    long long countLessEqual(vector<int>& arr, int target) {
        int n = arr.size();
        long long ans = 0;

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)arr[i] + arr[left] + arr[right];

                if (sum <= target) {
                   
                    ans += right - left;
                    left++;
                } else {
                    right--;
                }
            }
        }

        return ans;
    }
};