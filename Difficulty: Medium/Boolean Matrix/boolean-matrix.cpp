class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
  
          int count[1001] = {0};
          int count1[1001] = {0};
          for(int i = 0;i<mat.size();i++){
          for(int j = 0;j<mat[0].size();j++){
              if(mat[i][j] == 1){
                  count[j]++;
              }
          }
          }
          for(int i = 0;i<mat.size();i++){
          for(int j = 0;j<mat[0].size();j++){
                if(mat[i][j] == 1){
                    count1[i]++;
                }
            }
         }
         bool hum = true;
         for(int i = 0;i<mat.size();i++){
             if(count1[i] >= 1){
                 hum = true;
             }
             else{
                 hum = false;
             }
         for(int j = 0;j<mat[0].size();j++){
             if(hum == true){
                mat[i][j] = 1;
             }
             if(count[j] >= 1) {
                 mat[i][j] = 1;
             }
         }
         }
      }
  };