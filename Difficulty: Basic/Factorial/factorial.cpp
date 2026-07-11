class Solution {
  public:
    int factorial(int x) {
        int ans = 1;
        for(int i = 1;i<=x;i++){
            ans = ans *i;
        }
        return ans;
        
      //return  n == 0 ? 1 : n*factorial(n-1);
        
    }
};