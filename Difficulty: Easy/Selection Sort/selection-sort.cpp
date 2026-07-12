class Solution {
  public:
    void selectionSort(vector<int> &arr) {
         int n = arr.size();
        for(int i=0;i<n-1;i++){
            int smallestIdx = i;
            for(int j= i+1;j<n;j++){
                if(arr[j]< arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
        }
    }
};