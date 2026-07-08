class Solution {
  public:
    int findMean(vector<int>& arr) {
    int n  =arr.size();
    int ans = 0;
    int sum =0;
    for(int i =0;i<n;i++){
        sum += arr[i];
        ans = sum/n;
    }
    return ans;

        
    }
};