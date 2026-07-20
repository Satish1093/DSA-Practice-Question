class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        string repeat = word;
        while(sequence.find(repeat)!= string::npos){
            ans++;
            repeat += word;
        }
        return ans;
    }
};