class Solution {
  public:
    char getMaxOccuringChar(string& s) {
      
        unordered_map<char,int>mp;
        for(char ch : s ){
            mp[ch]++;
        }
        int maxi = 0;
        char ans;
            for( char ch = 'a';ch <= 'z'; ch++){
                if(mp[ch] > maxi){
                    maxi = mp[ch];
                    ans = ch;
                }
            }
        
        return ans;
       
        
    }
};