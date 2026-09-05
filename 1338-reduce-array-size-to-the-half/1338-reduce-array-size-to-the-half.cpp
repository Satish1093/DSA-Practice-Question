class Solution {
public:
    int minSetSize(vector<int>& arr) {
         unordered_map <int,int> mp;
        for(int x : arr){
            mp[x]++;
        }
        priority_queue <pair<int,int>> pq;

        for(auto& [key,freq] : mp){
            pq.push({freq, key});
        }
        vector <int> result;
        int n = arr.size();

        int ans = 0;
        int m = n/2;

        while(n > m){
            ans++;
            n -= pq.top().first;
            if(n > m){
                pq.pop();
            }else break;
        }
        return ans;

    }
};