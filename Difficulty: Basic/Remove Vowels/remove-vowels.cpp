class Solution {
  public:
    string removeVowels(string& s) {
        string result = "";
        for(char ch :s){
            char lower = tolower(ch);
            if( lower == 'a' || lower == 'i'|| lower == 'e'|| lower == 'o'|| lower == 'u'){
                continue;
            }
            result += ch;
            
        }
        return result;
        
    }
};