class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int n = machines.size();
        int sum = 0;
        for(int x : machines){
            sum+=x;
        }
        if(sum %n!= 0)
        return -1;
        int target = sum/n;
        int ans = 0,cumSum=0;
        for(int i =0;i<n;i++){
            int balance = machines[i] -target;
            cumSum += balance;
            ans = max(ans,max(abs(cumSum),balance));
        }
        return ans;
    }
};