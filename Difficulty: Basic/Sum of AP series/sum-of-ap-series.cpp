class Solution {
  public:
    int sumOfAP(int n, int a, int d) {
        int sum = 0;
        for(int i =1;i<=n;i++){
            sum +=a;
            a += d;
        }
        return sum;
    }
};