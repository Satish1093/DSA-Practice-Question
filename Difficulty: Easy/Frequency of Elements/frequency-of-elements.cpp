class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        
         vector<vector<int>> res;
        unordered_map<int, int> myMp;
        
        for(int i=0; i<arr.size(); i++){
            myMp[arr[i]]++;
        }
        
        for(int i=0; i<arr.size(); i++){
            if(myMp[arr[i]] > 0){
                res.push_back({arr[i], myMp[arr[i]]});
                myMp[arr[i]]=0;
            }
        }
        
        return res;
    }
};