class Solution {
public:
    long long getAns(int val, int poss, int len){
        
        if(len == 1){
            return (long long)val;
        }

        string ans = "";
        for(int i = 0 ; i < len ; i++){
            if(i == 0 || i == len-1){
                ans.push_back('1');
            }else{
                ans.push_back('0');
            }
        }

        val--;
        if(len % 2 != 0 && val > 0){
            int temp = val%10;
            ans[len/2] = ans[len/2] + temp;
            val /= 10;
        }

        int startInd = (len % 2 == 0)  ? (len/2)-1 : (len/2)-1;

        for(int i = startInd ; i >= 0 && val > 0 ; i--){
            int mini = val%10;
            ans[i] = ans[i] + mini;
            ans[len-i-1] = ans[len-i-1] + mini;
            val /= 10;
        }

        return stoll(ans);
    }


    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        int val = (intLength/2)-1;
        int poss = pow(10, val) * 9;
        if(intLength%2 != 0){
            poss *= 10;
        }

        if(intLength == 1){
            poss = 9;
        }
        
        vector<long long> ans;
        for(int i = 0 ; i < queries.size() ; i++){
            if(queries[i] > poss){
                ans.push_back(-1);
            }else{
                //cout << getAns(queries[i], poss, intLength) << endl;
                ans.push_back(getAns(queries[i], poss, intLength));
            }
        }

        return ans;
    }
};