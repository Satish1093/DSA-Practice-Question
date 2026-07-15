class Solution {
  public:
    string modify(string& s) {
          if (islower(s[0])) {
            for (char &ch : s) {
                ch = tolower(ch);
            }
        } else {
            for (char &ch : s) {
                ch = toupper(ch);
            }
        }
        return s;
    }
};