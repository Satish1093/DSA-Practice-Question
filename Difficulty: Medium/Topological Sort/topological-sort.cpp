class Solution {
  public:
      vector<int> topoSort(int V, vector<vector<int>>& edges) {
          vector<int> ans;
          queue<int> q;

          vector<int> indegree(V, 0);
          vector<vector<int>> adj(V);

          for(auto edge : edges) {
              int u = edge[0];
              int v = edge[1];

              adj[u].push_back(v);
              indegree[v]++;
          }

          for(int i = 0; i < V; i++) {
              if(indegree[i] == 0)
                  q.push(i);
          }

    
          while(!q.empty()) {
              int u = q.front();
              q.pop();

              ans.push_back(u);

              for(auto v : adj[u]) {
                  indegree[v]--;

                  if(indegree[v] == 0)
                      q.push(v);
              }
          }

          return ans;
      }
  };