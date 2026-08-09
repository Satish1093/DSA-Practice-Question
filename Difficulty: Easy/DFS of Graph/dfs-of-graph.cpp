class Solution {
  public:
   void dfsofgraph(int node, vector<vector<int>> &adj, vector<int> &ans, vector<int> &vist)
  {
       vist[node] = 1;               
        ans.push_back(node);        

        for (auto it : adj[node]) {
            if (!vist[it]) {
                dfsofgraph(it, adj, ans, vist);  
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int v=adj.size();
        vector<int>vis(v,0);
        vector<int>ans;
        dfsofgraph(0,adj,ans,vis);
        return ans;
        
    }
};