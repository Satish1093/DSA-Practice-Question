class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int, int> mpp;

              for (int i = 0; i < arr.size(); i++) {
                  mpp[arr[i]]++;
              }

              vector<vector<int>> ans;

              for (auto x : mpp) {
                  ans.push_back({x.first, x.second});
              }

              return ans;
    }
};