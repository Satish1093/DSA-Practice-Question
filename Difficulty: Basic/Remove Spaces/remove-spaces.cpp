class Solution {
  public:
  string removeSpaces(string& s) {
    int space = 0;
    int n = s.size();

    for(int i = 0; i < n; i++){
        if(s[i] == ' ') space++;
        else s[i - space] = s[i];
    }

    s.resize(n - space); 
    return s;
    }
};