class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
    int n =  arr.size();
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxi = INT_MIN;
    while(j<n){
        sum += arr[j];
        if(j-i+1 <k){
            j++;
        }else if(j-i+1 == k){
    
            maxi = max(maxi,sum);
            sum -=arr[i];
            i++;
            j++;
        }
            
    
    }
    return maxi;
        
    }
};