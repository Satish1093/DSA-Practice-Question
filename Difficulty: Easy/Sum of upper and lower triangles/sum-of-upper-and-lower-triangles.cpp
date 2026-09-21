class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        int n =  mat.size();
        vector<int>ans;
    int lower = 0;
    for(int i =0;i<n ;i++){
        for(int j = 0;j<=i;j++){
            lower += mat[i][j];
        }
    }
    int upper = 0;
    for(int i =0;i<n;i++){
        for(int j = n-1;j>=i;j--){
            upper += mat[i][j];
        }
    }
    ans.push_back(upper);
    ans.push_back(lower);
        return ans;
    }
};
