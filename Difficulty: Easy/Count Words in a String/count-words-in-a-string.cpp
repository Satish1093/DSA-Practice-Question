class Solution {
public:
    int countWords(string &s) {
           string words="";
    int count=0;
    int n=s.length();
    
    if(s[0]>='a' and s[0]<='z') words+=s[0];
    for(int i=1;i<n;i++){
         
         char ch=s[i];
         if( (ch>='a' and ch<='z' ) and s[i-1]!='\\' ) words+=ch; // checking for the \n, \t, or  \any chars
         else{
             if(!words.empty()) count++;
             words="";
         }
         
    }
    if(!words.empty()) count++;
    return count;
    }
};