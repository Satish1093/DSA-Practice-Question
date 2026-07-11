class Solution {
  public:
 
  public:
    bool isStrong(int n) {
    int temp=n;
       int sum=0;
     
     
        while(n!=0){
            int digit=n%10;
            int fact=1;
             for(int i=1;i<=digit;i++){ 
            fact=fact*i;
             }
            sum=sum+fact;
            n=n/10;
          }
   
      return  temp==sum;  
    }
};
