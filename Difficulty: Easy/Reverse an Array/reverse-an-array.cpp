class Solution {
  public:
     void reverseArray(vector<int> &arr) {
        int n = arr.size();
        vector<int>ans(n);
        for(int i = 0;i<n;i++){
            ans[i] = arr[n-1-i];
        }
        arr = ans;
        
    }
};