class Solution {
public:
    void solve(vector<vector<int>> &mat,vector<int> &v,vector<vector<int>> matrix,int xd, int yd,int &a,int &b,int n,int m,int &maxi){
        if(a == xd && b == yd){
            int size = v.size();
            maxi = max(maxi,size);
            return ;
        }
        v.push_back(matrix[a][b]);
        mat[a][b] = 1;
        if(a+1 >= 0 && a+1 < n && mat[a+1][b] == 0 && matrix[a+1][b] != 0){
            int p = a+1;
            int q = b;
            solve(mat,v,matrix,xd,yd,p,q,n,m,maxi);
        }
        if(a-1 >= 0 && a-1 < n && mat[a-1][b] == 0 && matrix[a-1][b] != 0){
            int p = a-1;
            int q = b;
            solve(mat,v,matrix,xd,yd,p,q,n,m,maxi);
        }
        if(b+1 >= 0 && b+1 < m && mat[a][b+1] == 0 && matrix[a][b+1] != 0){
            int p = a;
            int q = b+1;
            solve(mat,v,matrix,xd,yd,p,q,n,m,maxi);
        }
        if(b-1 >= 0 && b-1 < m && mat[a][b-1] == 0 && matrix[a][b-1] != 0){
            int p = a;
            int q = b-1;
            solve(mat,v,matrix,xd,yd,p,q,n,m,maxi);
        }
        v.pop_back();
        mat[a][b] = 0;
        return ;
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd) {
        int n = matrix.size();
        int m = matrix[0].size();
        if(matrix[xs][ys] == 0 || matrix[xd][yd] == 0){
            return -1;
        }
        vector<vector<int>> mat(n,vector<int> (m,0));
        vector<int> v;
        int maxi = -1;
        int a = xs;
        int b = ys;
        solve(mat,v,matrix,xd,yd,a,b,n,m,maxi);
        return maxi;
    }
};