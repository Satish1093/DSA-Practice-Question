class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
       int left = *max_element(weights.begin(), weights.end());

    
        int right = 0;

        for (int weight : weights) {
            right += weight;
        }

        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            int dayCount = 1;
            int capacity = 0;

            for (int weight : weights) {
                if (capacity + weight > mid) {
                    dayCount++;
                    capacity = weight;
                } else {
                    capacity += weight;
                }
            }

            if (dayCount <= days) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};