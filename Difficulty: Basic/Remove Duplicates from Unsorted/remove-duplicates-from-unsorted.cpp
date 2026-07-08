class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        unordered_set<int> s;
        vector<int> v;
        for(int i=0; i<arr.size(); i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                v.push_back(arr[i]);
            }
        }
        return v;
    }
};