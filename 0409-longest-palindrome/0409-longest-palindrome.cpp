class Solution {
public:
    int longestPalindrome(string s) {
        int oddcount= 0;
        unordered_map<char,int>ump;
        for(char ch : s){
            ump[ch]++;
            if ( ump[ch]%2 == 1)
            oddcount++;
            else
            oddcount--;
        }
        if(oddcount > 1)
        return s.length() - oddcount +1;
        return s.length();
    }
};