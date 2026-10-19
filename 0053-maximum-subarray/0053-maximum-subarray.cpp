class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =  nums.size();
        int maxi = INT_MIN;
        int curr  = 0;
        for(int num : nums){
            curr += num;
            maxi = max(maxi ,curr);
        
        if(curr < 0){
             curr = 0;
        }
    }
return maxi;
    }
};