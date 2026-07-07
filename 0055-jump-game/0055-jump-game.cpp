class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
      int  minIndex = 0;
        for(int i =0;i<n;i++){
            if(i>minIndex)return false;
            minIndex = max(minIndex,i+nums[i]);
        }
        return true;
    }
};