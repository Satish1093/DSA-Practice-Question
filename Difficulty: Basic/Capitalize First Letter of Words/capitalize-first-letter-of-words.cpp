class Solution {
  public:
    string convert(string& s) {
       if(!s.empty())
           s[0] = toupper(s[0]);
           for(int i =1;i<s.size();i++){
               if(s[i-1] == ' ')
               s[i] = toupper(s[i]);
           }
       
       return s;
    }
};