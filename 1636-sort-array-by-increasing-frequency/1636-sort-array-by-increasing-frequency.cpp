class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>freq(201,0);
        for(int num:nums){
            freq[num+100] +=1;
        }
        sort(nums.begin(),nums.end(),[&freq](int a,int b){
            if(freq[a+100] == freq[b+100])return a>b;
            return freq[a+100] <freq[b+100];

        });
        return nums;
    }
};