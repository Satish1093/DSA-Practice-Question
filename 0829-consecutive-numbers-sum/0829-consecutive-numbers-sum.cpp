class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ans =0;
        for(int k= 2;;k++){
            long long sum = k*(k-1)/2;
            if(sum>=n)break;
            if((n-sum)%k==0)ans++;
        }
        return ans+1;
    }
};