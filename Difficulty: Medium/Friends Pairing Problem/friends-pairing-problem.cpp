class Solution {
  public:
    int countFriendsPairings(int n) {
        int curr = 1, prev = 1;
        
        for(int i=2;i<=n;i++)
        {
            int temp = curr + (prev * (i-1));
            
            prev = curr;
            
            curr = temp;
        }
        
        return curr;
        
    }
};
