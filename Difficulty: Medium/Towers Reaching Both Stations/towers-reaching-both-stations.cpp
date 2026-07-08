class Solution {
  public:
    int countCoordinates(vector<vector<int>>& mat) {
          queue<pair<int, int>>q;
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>>w(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            q.push({i, 0});
            w[i][0] = -1;
        }
        for(int i = 1; i < m; i++){
            q.push({0, i});
            w[0][i] = -1;
        }
        int x[] = {0, 0, 1, -1};
        int y[] = {1, -1, 0, 0};
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int a = it.first, b = it.second;
            for(int i = 0; i < 4; i++){
                int mx = a + x[i], my = b + y[i];
                if(mx >= 0 && my >= 0 && mx < n && my < m && mat[mx][my] >= mat[a][b] && w[mx][my] == 0){
                    q.push({mx, my});
                    w[mx][my] = -1;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            q.push({i, m - 1});
            if(w[i][m - 1] == -1) ans++;
            w[i][m - 1] = 1;
        }
        for(int i = 0; i < m - 1; i++){
            q.push({n - 1, i});
            if(w[n - 1][i] == -1) ans++;
            w[n - 1][i] = 1;
        }
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int a = it.first, b = it.second;
            for(int i = 0; i < 4; i++){
                int mx = a + x[i], my = b + y[i];
                if(mx >= 0 && my >= 0 && mx < n && my < m && mat[mx][my] >= mat[a][b] && w[mx][my] != 1){
                    q.push({mx, my});
                    if(w[mx][my] == -1) ans++;
                    w[mx][my] = 1;
                }
            }
        }
        return ans;
        
    }
};