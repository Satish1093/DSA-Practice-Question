class Solution {
  public:
    void interchange(vector<vector<int>>& mat) {
 int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {
            swap(mat[i][0], mat[i][m - 1]);
        }
    
        
    }
};