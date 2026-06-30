class Solution {
  public:
    int binaryToDecimal(string& b) {
        int str = 0;
        for(char ch : b){
            str = (str <<1)|(ch-'0');
        }
        return str;
        
    }
};