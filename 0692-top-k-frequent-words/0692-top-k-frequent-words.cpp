class Solution {
public:
    struct Compare {
        bool operator()(pair<int, string>& a, pair<int, string>& b) {

            
            if (a.first != b.first) {
                return a.first > b.first;
            }

        
            return a.second < b.second;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        // Step 1: Count frequency
        unordered_map<string, int> mp;

        for (string word : words) {
            mp[word]++;
        }

        // Step 2: Min heap of size k
        priority_queue<
            pair<int, string>,
            vector<pair<int, string>>,
            Compare
        > pq;

        for (auto x : mp) {
            pq.push({x.second, x.first});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        
        vector<string> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};