class Solution {
  public:
    int getCount(int n) {
        int cnt  = 0,sm = 0,i = 0;
        for(int i = 2;i*i<=2*n;i++){
            int val = n-(i*(i-1))/2;
            if(val%i == 0)cnt++;
        }
        return cnt;
        
    }
};