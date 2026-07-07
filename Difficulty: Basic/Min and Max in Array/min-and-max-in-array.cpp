class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
    int n =  arr.size() ;
    sort(arr.begin(),arr.end());
    int mini = arr[0];
    int maxi = arr[0];
    for(int i = 0;i<n;i++){
    mini = min(mini,arr[i]);
    maxi = max(maxi,arr[i]);
    }
        return {mini,maxi};
    }
};