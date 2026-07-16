class Solution {
  public:
    vector<int> customSort(vector<int>& arr) {
        int n=arr.size();
        int mid = n/2;
        sort(arr.begin(),arr.begin()+ mid);
        sort(arr.begin()+mid,arr.end(),greater<int>());
        return arr;

        
    }
};