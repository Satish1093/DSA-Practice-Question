class Solution {
  public:
    bool commonSubseq(string &s1, string &s2) {
        for(char &i : s1){
            if(s2.find(i) <s2.size()){
                return true;
            }
        }
        return false;
    }
};
