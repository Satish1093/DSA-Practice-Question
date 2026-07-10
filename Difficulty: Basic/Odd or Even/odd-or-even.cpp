class Solution {
  public:
    bool isEven(int n) {
        for(int i=0;i<n;i++){
            if(n%2==0){
                return true;
            }
        }
        return false;
        
    }
};