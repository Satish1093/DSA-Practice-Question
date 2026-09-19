class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
    int n =  arr.size();
    int left  = 0;
    int right =  n-1;
    int res =  -1;
    while(left<= right){
        int mid = left+  (right-left)/2;
        if(arr[mid] >= x){
            res = mid;
            right = mid-1;
        }else{
        left = mid+1;
        }
    }
    return res;
        
    }
};