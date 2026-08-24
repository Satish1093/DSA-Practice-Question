class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(grid[i][j] == 2) {
                    q.push({i, j});
                }

                if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int minutes = 0;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while(!q.empty()) {

            int size = q.size();
            while(size--) {

                auto [i, j] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++) {

                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni >= 0 && nj >= 0 &&
                       ni < n && nj < m &&
                       grid[ni][nj] == 1) {

                        grid[ni][nj] = 2;
                        fresh--;

                        q.push({ni, nj});
                    }
                }
            }

            if(!q.empty())
                minutes++;
        }

        if(fresh > 0)
            return -1;

        return minutes;
    }
};