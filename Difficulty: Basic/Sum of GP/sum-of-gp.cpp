class Solution {
  public:
    int sumOfGP(int n, int a, int r) {
        int sum = 0;
        for(int i =0;i<n;i++){
            sum = sum+a;
            a= a*r;
        }
        return sum;
        
    }
};