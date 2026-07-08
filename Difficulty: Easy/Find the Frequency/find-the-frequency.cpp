/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        
        unordered_map<int,int>mp;
        for(int num:arr){
            mp[num]++;
            
        }
        return mp[x];
    }
};