class Solution {
  public:
    bool isPossible(vector<int>& arr, int s, int x) {
        vector<long long>nums;
        long long total = s;
        nums.push_back((long long)s);
        for(int a :arr){
            long long next = total +a;
            if(next >x)
            break;
            nums.push_back(next);
            total += next;
        }
        long long target = x;
        for(int i = nums.size()-1;i>= 0;i--){
            if(nums[i] <= target){
                target -= nums[i];
            }
            if(target == 0)
            return true;
        }
        return false;
        
    }
};