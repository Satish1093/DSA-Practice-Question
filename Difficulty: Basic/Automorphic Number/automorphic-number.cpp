class Solution {
  public:
    string isAutomorphic(int n) {
       if(n<0)n = -n;
       int sq = n*n;
       while(n>0){
           if(n%10!=sq%10)
           return "Not Automorphic";
           n/=10;
           sq/=10;
       }
       return "Automorphic";
        
    }
};