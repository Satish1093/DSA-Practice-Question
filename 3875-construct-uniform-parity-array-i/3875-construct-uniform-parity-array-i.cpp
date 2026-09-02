class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        if(n == 1 )return true;
        int even = 0,odd =0;
        for(int x: nums1 ){
            if(x %2 == 0)even++;
            else odd++;
        }
        return true;
    }
};