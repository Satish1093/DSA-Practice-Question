class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minprice  = INT_MAX;
        int maxprice =0;
        for(int i =0;i<n;i++){
            if(minprice > prices[i]){
                minprice = prices[i];
            }
            int profit = prices[i] - minprice;
            if(profit > maxprice){
                maxprice = profit;
            }
        }
        return maxprice;
    }
};