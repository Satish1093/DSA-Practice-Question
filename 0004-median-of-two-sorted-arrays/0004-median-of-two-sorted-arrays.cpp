class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
    vector<int>ans;
        for(int i=0;i<m;i++){
            ans.push_back(nums1[i]);
        }
            for(int j =0;j<n;j++){
                ans.push_back(nums2[j]);
            }
        
       sort(ans.begin(), ans.end());
        
        int size = ans.size();
        
        if(size % 2 != 0) {
            return ans[size / 2];
        }
        

        return (ans[size / 2 - 1] + ans[size / 2]) / 2.0;
    }
};