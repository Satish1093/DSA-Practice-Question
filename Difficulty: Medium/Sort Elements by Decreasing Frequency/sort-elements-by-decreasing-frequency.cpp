class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num : arr){
            freq[num]++;
        }
        sort(arr.begin(),arr.end() ,[&](int a,int b){
        if(freq[a] != freq[b])
       return  freq[a] >freq[b];
        return a<b;
        });
        return arr;
    }
};