class Solution {
  public:
  int count = 0;
  void TOHHelper(int n ,int from, int to,int aux){
      if(n>0){
          TOHHelper(n-1,from,aux,to);
          //cout<<"move disk"<<n<<"from rod"<<from<<"to rod"<<to<<endl;
          count++;
          TOHHelper(n-1,aux,to,from);
      }
  }
    int towerOfHanoi(int n, int from, int to, int aux) {
        TOHHelper(n,from,to,aux);
        return count;
        
    }
};