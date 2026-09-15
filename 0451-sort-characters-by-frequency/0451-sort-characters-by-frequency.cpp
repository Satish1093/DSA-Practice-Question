class Solution {
public:
    string frequencySort(string s) {
        int n =  s.size();
        unordered_map<char,int>freq;
        for(char ch : s){
            freq[ch]++;
            
        }
       vector<pair<int,int>>v(freq.begin(),freq.end());
     sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string ans = "";
        for(auto &p:v){
            ans+= string(p.second,p.first);
        }


       
        return ans;
    }
};