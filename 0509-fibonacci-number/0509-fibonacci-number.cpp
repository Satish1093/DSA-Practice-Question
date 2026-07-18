class Solution {
public:
    int fib(int n) {
       
            if(n==0)return 0;
            if(n==1)return 1;
               for(int i =0;i<n;i++){
                if(n>0){
                    return fib(n-1)+fib(n-2);
                }
               }
               return n;
        
    }
};