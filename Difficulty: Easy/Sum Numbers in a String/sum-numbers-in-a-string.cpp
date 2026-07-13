class Solution {
  public:
    int findSum(string& s) {
      int sum = 0;
        string temp = "";
        for (char c : s) {
            if (isdigit(c)) {

                temp += c;
            } else {
                if (!temp.empty()) {
                    sum += stoi(temp);
                    temp = ""; 
                }
            }
        }
        
        if (!temp.empty()) {
            sum += stoi(temp);
        }
        
        return sum;
        
    }
};