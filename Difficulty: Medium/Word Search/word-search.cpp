class Solution {
  public:
    bool solve(int a,int b,int n,int m,vector<vector<char>> &mat,string &word,vector<vector<int>> &v,int k,bool &bl){
        if(k == word.length()-1){
            return 1;
        }
        v[a][b] = 1;
        k++;
        if(a+1 >= 0 && a+1 < n && v[a+1][b] == 0 && mat[a+1][b] == word[k]){
             if(solve(a+1,b,n,m,mat,word,v,k,bl)){
                 return 1;
             }
        }
        if(a-1 >= 0 && a-1 < n && v[a-1][b] == 0 && mat[a-1][b] == word[k]){
             if(solve(a-1,b,n,m,mat,word,v,k,bl)){
                 return 1;
             }
        }
       if(b+1 >= 0 && b+1 < m && v[a][b+1] == 0 && mat[a][b+1] == word[k]){
             if(solve(a,b+1,n,m,mat,word,v,k,bl)){
                 return 1;
             }
        }
       if(b-1 >= 0 && b-1 < m && v[a][b-1] == 0 && mat[a][b-1] == word[k]){
             if(solve(a,b-1,n,m,mat,word,v,k,bl)){
                 return 1;
             }
        }
        v[a][b] = 0;
        return 0;
    }
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        int n = mat.size();
        int m = mat[0].size();
        bool bl = false;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(mat[i][j] == word[0]){
                int k = 0;
                if(solve(i,j,n,m,mat,word,v,k,bl)){
                    return true;
                }
            }
        }
        }
        return false;
        
        
    }
};