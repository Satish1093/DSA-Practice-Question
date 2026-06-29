class Solution {
  public:
    bool armstrongNumber(int n) {
        int a = n;
        int sum = 0;
        while(a>0){
        int lastdigit = a%10;
        sum = sum + pow(lastdigit ,3);
        a = a/10;
        }
        if(n==sum)return true;
        else
        return false;
        
    }
};