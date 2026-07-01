class Solution {
public:
    int maxDepth(string s) {
        int maximum = 0;
        int maxi = 0 ;
        for(char&ch : s){
            if(ch == '(')

                maxi = max(maxi,++maximum);
                if(ch == ')')
                    maximum--;
                }
            
        
        return maxi;
    }
};