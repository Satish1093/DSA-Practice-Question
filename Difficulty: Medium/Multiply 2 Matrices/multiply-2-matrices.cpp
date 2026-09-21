class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
    int n1,m1,n2,m2;
     n1 = mat1.size();
     n2 =  mat2.size();
     m1 = mat1[0].size();
     m2 =  mat2[0].size();
     vector<vector<int>>ans;
    if(m1 ==  n2){
        for(int i=0;i<n1;i++){
            vector<int>temp;
            for(int j=0;j<m2;j++){
                int sum =0;
                for(int k =0;k<m1;k++){
                    sum =  sum+ (mat1[i][k]*mat2[k][j]);
                }
                temp.push_back(sum);
            }
            ans.push_back(temp);
        }
        
    }
        return ans;
    }
};