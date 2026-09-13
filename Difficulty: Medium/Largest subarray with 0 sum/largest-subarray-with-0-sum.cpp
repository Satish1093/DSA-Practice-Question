class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n =  arr.size();
        long long int  sum = 0 ;
        int len = 0;
        unordered_map<int,int>freq;
        for(int i =0;i<n;i++){
        sum += arr[i];
        if(sum == 0){
            len  =  max(len ,i+1);
        }
        unordered_map<int,int>::iterator it  = freq.find(sum);
        if(it != freq.end()){
            len = max(len ,i-it->second);
        }else{
            freq[sum] = i;
        }
        }
        return len;
    }
};