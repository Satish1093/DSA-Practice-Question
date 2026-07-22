class Solution {
  public:
    int minDeletions(vector<int>& arr) {
    vector<int> prev;
        int n=arr.size();
        prev.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if( prev.back() <arr[i] ){
                prev.push_back(arr[i]);
            }
            else{
                auto x = lower_bound(prev.begin(), prev.end(), arr[i]);
                *x= arr[i];
            }
        }
        return n-prev.size();
        
    }
};