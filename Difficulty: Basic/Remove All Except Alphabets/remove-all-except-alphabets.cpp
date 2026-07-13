class Solution {
  public:
    string removeChars(string &s) {
        string result = "";
        for(char ch : s){
            if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
                result += ch;
            }
        }
        return result;
        
    }
};