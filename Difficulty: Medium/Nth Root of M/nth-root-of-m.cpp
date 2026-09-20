class Solution {
  public:
    int nthRoot(int n, int m) {
        for(int i=0;i<=m;i++){
                if(pow(i,n)==m){
                    return i;
                }
                else if(pow(i,n)>m){
                    break;
                }
            }
            return -1;
        
    }
};