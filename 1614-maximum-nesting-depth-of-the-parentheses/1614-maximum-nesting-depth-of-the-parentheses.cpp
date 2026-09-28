class Solution {
public:
    int maxDepth(string s) {
        int result =0,curr=0;

        for(char&ch : s){
            if(ch == '(')
                result= max(result,++curr);
                if(ch==')')
                curr--;

            }
        
        return result;
    }
};