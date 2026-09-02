class Solution {
public:
    int maxVowels(string s, int k) {
        int n =  s.size();
        int left  = 0;
        int count = 0;
        int maxi = 0;
        for(int right = 0;right < n;right++){
        char ch = s[right];
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u'){
                    count++;
                    
                }
                if(right-left +1 >k){
                    char leftchar = s[left];
                    if(leftchar == 'a'|| leftchar == 'e' || leftchar == 'i' || leftchar == 'o' || leftchar == 'u'){
                        count--;
                    }
                    left++;
                }
               if(right-left +1 == k){
                maxi = max(maxi ,count);
               }
            }
        
        return maxi;
    }
};