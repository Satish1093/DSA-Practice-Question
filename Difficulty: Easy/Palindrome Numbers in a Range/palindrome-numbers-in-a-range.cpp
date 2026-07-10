class Solution {
  public:
    vector<int> printPalindromes(int m, int n) {
        vector<int>ans;
        for(int num =m;num<=n;num++){
            int rev = 0;
            int original = num;
            while(original>0){
                rev= rev *10 + original % 10;
                original /= 10;
            }
            if(rev == num){
                ans.push_back(num);
            }
            
        }
        return ans;
        
    }
};