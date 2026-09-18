class Solution {
  public:
  int GetLen(int i ,string&s1 ,string&s2){
      int j = 0,start = i;
      for(i;i<s1.size();i++){
          if(s1[i] == s2[j]){
              j++;
          }
          if(j ==s2.size())break;
      }
     
             if(j<s2.size())return INT_MAX;
             return i-start+1;
  }
    string minWindow(string& s1, string& s2) {
        int maxLen = INT_MAX,start = -1;
        for(int i = 0;i<s1.size();i++){
            if(s1[i] ==  s2[0]){
                int len =  GetLen(i,s1,s2);
                if(len < maxLen){
                    maxLen =  len;
                    start = i;
                }
            }
        }
        if(start == -1){
            return "";
        }
        return s1.substr(start,maxLen);
    }
};
