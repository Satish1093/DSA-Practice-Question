class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n =  mat.size();
        int m =  mat[0].size();
        int row= 0;
        for(int i = 0;i<n;i++){
            if(mat[i][0] == x)
                return true;
            
            else if(mat[i][0]>x){
                row =  i-1;
                break;
            }else{
                row = i;
            }
        }
        if(row>=0){
            for(int i =0;i<m;i++){
                if(mat[row][i] == x)
                    return true;
                }
            }
        return false;
    }
};