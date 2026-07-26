class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
       vector<vector<int>> ans;
        
        int n = arr.size();
        int i = 0;
        int levelNodes = 1;
        
        while (i < n) {
            vector<int> level;
            
            for (int j = 0; j < levelNodes && i < n; j++) {
                level.push_back(arr[i]);
                i++;
            }
            
            sort(level.begin(), level.end());
            ans.push_back(level);
            
            levelNodes *= 2;
        }
        
        return ans;
        
    }
};
