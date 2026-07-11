class Solution {
  public:
    string findLargest(int n, int s) {
         if(s==0 && n>1) return "-1";
        string ans;
        
        for(int i = 0;i<n;i++){
            if(s>=9){
                ans += 9+'0';
                s -= 9;
            }
            else{
                 ans += s +'0';
                 s=0;
            }
        }
        
        if(s>0) return "-1";
        
        return ans;
        
    }
};