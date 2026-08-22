class Solution {
public:
    bool checkDivisibility(int n) {
        int orignal = n;
        int sum = 0;
        int pro = 1;
        while(n>0){
        int digit = n%10;
            n  = n/10;
            sum += digit;
         pro *= digit;
    
        }
        return orignal % (sum + pro) == 0;
    }
};