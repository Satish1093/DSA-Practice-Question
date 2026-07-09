class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans ;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
            i++;
        }
        return ans;
    }
};