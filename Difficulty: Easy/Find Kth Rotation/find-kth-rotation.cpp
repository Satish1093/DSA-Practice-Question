class Solution {
  public:
    int findKRotation(vector<int> &arr) {
       int min = arr[0], minIndex = 0;
         for (int i = 0; i < arr.size(); i++) {
             if (min > arr[i]) {
                 min = arr[i];
                 minIndex = i;
             }
         }

         return minIndex;
        
    }
};
