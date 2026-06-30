class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>s;
        vector<int>v;
        for(int i =0; ;i++){
            for(int j=0;;j++){
                int sum = pow(x,i)+pow(y,j);
                if(sum<= bound)
                s.insert(sum);
                if(y==1||pow(y,j)>bound)
                break;
            }
            if(x ==1 || pow(x,i)>bound)
            break;
        }
        for(auto val :s)
        v.push_back(val);
        return v;
    }
};