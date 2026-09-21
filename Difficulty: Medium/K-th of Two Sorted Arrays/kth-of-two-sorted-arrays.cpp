class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        vector<int> ans;
        int n =  a.size();
        int m =  b.size();
        for(int i =0;i<n;i++){
            ans.push_back(a[i]);
        }
        for(int j=0;j<m;j++){
            ans.push_back(b[j]);
        }
        sort(ans.begin(),ans.end());
    
        for(int i=0;i<ans.size();i++){
            if(i == k-1){
                return ans[i];
            }
        }
        
    }
};