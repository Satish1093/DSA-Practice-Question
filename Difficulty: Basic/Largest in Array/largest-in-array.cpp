class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int count = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            count = arr[i];
            maxi = max(maxi ,arr[i]);
            
        }
        return maxi;
        
    }
};
