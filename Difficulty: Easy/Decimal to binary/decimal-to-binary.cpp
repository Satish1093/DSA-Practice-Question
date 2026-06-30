class Solution {
  public:
    string decToBinary(int n) {
        string res = "";
        while (n >= 1) {
            res = to_string(n % 2) + res;
            n = n / 2;
        }
        return res;
        
    }
};