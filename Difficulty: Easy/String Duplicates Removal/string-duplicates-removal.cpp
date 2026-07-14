class Solution {
  public:
    string removeDuplicates(string &s) {
        string result = "";
        for(int i =0;i<s.size();i++){
            bool found = false;
            for(int j =0;j<result.size();j++){
                if(s[i] == result[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                result += s[i];
            }
        }
        return result;
        
    }
};